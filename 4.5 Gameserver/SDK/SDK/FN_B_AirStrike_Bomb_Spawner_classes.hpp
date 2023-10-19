#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10C (0x434 - 0x328)
// BlueprintGeneratedClass B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C
class AB_AirStrike_Bomb_Spawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnLoopCounter;                                  // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SpawnBombsTimer;                                   // 0x340(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TimeBetweenBombs;                                  // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                BombPrj;                                           // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       SpawnLocations;                                    // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec      EffectOnExplode;                                   // 0x370(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                              BombSpawnDirection;                                // 0x3F0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        BombPrjGravity;                                    // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            BombInitTransform;                                 // 0x400(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        HeightToSpawnBombs;                                // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_AirStrike_Bomb_Spawner_C* GetDefaultObj();

	void UserConstructionScript();
	void InitBombSpawn(class AFortPlayerPawn* InFortPlayerPawn, TArray<struct FVector>& InSpawnLocations, const struct FFortGameplayEffectContainerSpec& InEffectOnExplode, const struct FTransform& InBombInitTransform);
	void BombSpawnLoop();
	void ExecuteUbergraph_B_AirStrike_Bomb_Spawner(int32 EntryPoint, const struct FVector& CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_CustomEvent_InFortPlayerPawn, TArray<struct FVector>& K2Node_CustomEvent_InSpawnLocations, const struct FFortGameplayEffectContainerSpec& K2Node_CustomEvent_InEffectOnExplode, const struct FTransform& K2Node_CustomEvent_InBombInitTransform, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


