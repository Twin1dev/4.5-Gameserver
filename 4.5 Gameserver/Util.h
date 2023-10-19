#pragma once

// Get the Fortnite Imagebase
static __forceinline uintptr_t BaseAddress()
{
    return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
}

// Gets the Default Object of a class, used for calling functions.
template <typename T>
inline T* GetDefaultObject()
{
	return (T*)T::StaticClass()->DefaultObject;
}

// Get the worlds gamemode
inline AFortGameModeAthena* GetGameMode()
{
	return reinterpret_cast<AFortGameModeAthena*>(UWorld::GetWorld()->AuthorityGameMode);
}

// Get the worlds gamestate
inline AFortGameStateAthena* GetGameState()
{
	return reinterpret_cast<AFortGameStateAthena*>(UWorld::GetWorld()->GameState);
}

template <class T>
T* SpawnActor(FVector Location, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 })
{
	FQuat Quat{};
	FTransform Transform{};

	auto DEG_TO_RAD = 3.14159 / 180;
	auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

	auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
	auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

	auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
	auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

	auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
	auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	Transform.Rotation = Quat;
	Transform.Scale3D = Scale3D;
	Transform.Translation = Location;

	auto Actor = GetDefaultObject<UGameplayStatics>()->BeginSpawningActorFromClass(UWorld::GetWorld() , Class, Transform, false, nullptr);
	if (Actor)
		GetDefaultObject<UGameplayStatics>()->FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}