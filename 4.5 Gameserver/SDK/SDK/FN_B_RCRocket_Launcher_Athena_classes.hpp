#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xF2C - 0xF0C)
// BlueprintGeneratedClass B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C
class AB_RCRocket_Launcher_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_343D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                RC;                                                // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RearMuzzle;                                        // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeFX_End;                                 // 0xF28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_RCRocket_Launcher_Athena_C* GetDefaultObj();

	bool IsCachedIsProjectileWeapon();
	void UserConstructionScript();
	void SendMuzzleFlashFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_RCRocket_Launcher_Athena(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


