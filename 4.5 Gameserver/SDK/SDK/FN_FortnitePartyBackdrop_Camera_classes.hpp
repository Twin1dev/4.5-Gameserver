#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x8E0 - 0x8C0)
// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FortEntryMusic;                                    // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     Fort_Entry_Music_Controller;                       // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFortnitePartyBackdrop_Camera_C* GetDefaultObj();

	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable1, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors1, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1);
};

}

