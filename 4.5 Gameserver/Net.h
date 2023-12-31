#pragma once

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/ENetMode/
enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

constexpr ENetMode NetMode = ENetMode::NM_DedicatedServer;

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UWorld/GetNetMode/
static ENetMode GetNetModeWorld()
{
	return NetMode;
}

// https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AActor/GetNetMode/
static ENetMode GetNetModeActor()
{
	return NetMode;
}

// https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/Engine/UNetDriver/InitListen/, https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/SetWorld/
// For Listening
static bool (*InitHost)(AOnlineBeacon* Beacon);
static void (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause);
inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
inline void* (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
//  ----------------------------------------------------------------------------------------------------------------------

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/TickFlush/
static void (*TickFlush)(UNetDriver*);
static void TickFlushHook(UNetDriver* NetDriver)
{
	// ServerReplicateActors https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/Engine/UNetDriver/ServerReplicateActors/
	if (auto ReplicationDriver = NetDriver->ReplicationDriver)
		reinterpret_cast<void(*)(UObject*)>(ReplicationDriver->Vft[0x53])(ReplicationDriver);

	if (GetAsyncKeyState(VK_F6) & 1)
	{
		GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(UWorld::GetWorld(), L"startaircraft", nullptr);
	}

	return TickFlush(NetDriver);
}