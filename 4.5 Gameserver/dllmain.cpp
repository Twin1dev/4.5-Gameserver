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


DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    MH_Initialize();

    InitGObjects();

    CREATEHOOK(BaseAddress() + 0x2540030, GetNetModeWorld, nullptr);
    
    CREATEHOOK(BaseAddress() + 0x1f4efd0, GetNetModeActor, nullptr);

    // We COULD use SwitchLevel, but ExecuteConsoleCommand seems faster for me, unsure.
    GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);

    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    auto ChangeGameSessionID = BaseAddress() + 0xc96ca0;

    // Nulls so it doesnt crash, if you hook AActor::GetNetMode early then it calls this for no reason and crashes.
    DWORD dwProt;
    VirtualProtect((PVOID)ChangeGameSessionID, 1, PAGE_EXECUTE_READWRITE, &dwProt);

    *(uint8_t*)ChangeGameSessionID = 0xC3;

    DWORD dwTemp;
    VirtualProtect((PVOID)ChangeGameSessionID, 1, dwProt, &dwTemp);
    //

    static auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

    VirtualHook(GameModeDefault->Vft, 253, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);


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

