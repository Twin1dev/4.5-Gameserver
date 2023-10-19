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

    InitGObjects();

    CREATEHOOK(BaseAddress() + 0x2540030, GetNetModeWorld, nullptr);

    CREATEHOOK(BaseAddress() + 0x216dea0, KickPlayerHook, &KickPlayer);
    
    CREATEHOOK(BaseAddress() + 0x1f4efd0, GetNetModeActor, nullptr);

    // We COULD use SwitchLevel, but ExecuteConsoleCommand seems faster for me, unsure.
    GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);

    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    Hooks::Init();
    Hooks::NullFunctions();

    static auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");
    // If you would like understanding on Vfts and Virtual Functions: https://en.wikipedia.org/wiki/Virtual_method_table, https://en.wikipedia.org/wiki/Virtual_function
    VirtualHook(GameModeDefault->Vft, 253, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
    VirtualHook(GameModeDefault->Vft, 193, SpawnDefaultPawnForHook);
    VirtualHook(GameModeDefault->Vft, 199, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);

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

