#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xF34 - 0xF0C)
// BlueprintGeneratedClass B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C
class AB_Assault_Surgical_Thermal_Athena_C : public AB_Assault_Generic_C
{
public:
	uint8                                        Pad_34BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(Transient, DuplicateTransient)
	float                                        ScalePlayerThermal_NewTrack_0_53EEC0934805CD1ABD5237ADD42E83EE; // 0xF18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScalePlayerThermal__Direction_53EEC0934805CD1ABD5237ADD42E83EE; // 0xF1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScalePlayerThermal;                                // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ScalePlayerVisibility;                             // 0xF28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        BlendInTime;                                       // 0xF30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Assault_Surgical_Thermal_Athena_C* GetDefaultObj();

	void UserConstructionScript();
	void ScalePlayerThermal__FinishedFunc();
	void ScalePlayerThermal__UpdateFunc();
	void OnSetTargeting(bool bNewIsTargeting);
	void PlayScopePP();
	void ReverseScopePP();
	void ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bNewIsTargeting, bool CallFunc_IsMobilePlatform_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


