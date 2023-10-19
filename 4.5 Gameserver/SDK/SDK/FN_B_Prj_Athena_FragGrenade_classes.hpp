#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x760 - 0x754)
// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	uint8                                        Pad_58B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_Prj_Athena_FragGrenade_C* GetDefaultObj();

	void UserConstructionScript();
	void FuseEnded();
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int32 EntryPoint, class AController* CallFunc_GetInstigatorController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}


