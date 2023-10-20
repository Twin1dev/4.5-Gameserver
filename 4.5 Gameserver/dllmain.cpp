#include "Includes.h"

#include "Util.h"
#include "Globals.h"
#include "Memory.h"
#include "Hooking.h"

#include "Inventory.h"
#include "Abilities.h"

#include "Net.h"

#include "Gamemode.h"
#include "Player.h"

#include "Hooks.h"

// This code is well commented. if you are new to gameservers, i recommend you read some of this :)


DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    MH_Initialize();

    SetConsoleTitleA("4.5 Gameserver");

    InitGObjects();

    CREATEHOOK(BaseAddress() + 0x2540030, GetNetModeWorld, nullptr);

 //   CREATEHOOK(BaseAddress() + 0x824670, Hooks::DispatchRequestHook, &Hooks::DispatchRequest);

    CREATEHOOK(BaseAddress() + 0x216dea0, KickPlayerHook, &KickPlayer);
    
    CREATEHOOK(BaseAddress() + 0x1f4efd0, GetNetModeActor, nullptr);

    // We COULD use SwitchLevel, but ExecuteConsoleCommand seems faster for me, unsure.
    GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);

    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

 //   CREATEHOOK(BaseAddress() + 0x1532420, Hooks::CollectGarbage, nullptr);

    Hooks::Init();
    Hooks::NullFunctions();

    static auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");
    static auto FortPlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

    // If you would like understanding on Vfts and Virtual Functions: https://en.wikipedia.org/wiki/Virtual_method_table, https://en.wikipedia.org/wiki/Virtual_function

    // GameMode
    VirtualHook(GameModeDefault->Vft, 253, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
    VirtualHook(GameModeDefault->Vft, 193, SpawnDefaultPawnForHook);
    VirtualHook(GameModeDefault->Vft, 199, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);

    // Player
    VirtualHook(FortPlayerControllerAthenaDefault->Vft, 484, ServerExecuteInventoryItemHook);

    //auto ServerLoadingScreenDropped = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerLoadingScreenDropped");

    //if (!ServerLoadingScreenDropped)
    //    std::cout << "Failed to find ServerLoadingScreenDropped!\n";

    //HookExec(ServerLoadingScreenDropped, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped);

    CREATEHOOK(BaseAddress() + 0x2299ff0, TickFlushHook, &TickFlush);

    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
    }
    return TRUE;
}

