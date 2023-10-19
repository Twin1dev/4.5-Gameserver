#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C
class UFortReplayCameraSettingsTab_C : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*      DamageEffects;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      HighQualityFX;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      NamePlates;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      PlayerOutlines;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      RelevancyZone;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      ShareLensSettings;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      TPAutoFollow;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            TPDistanceToSubject;                               // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFortReplayCameraSettingsTab_C* GetDefaultObj();

	void RefreshHighQualityFXState(const struct FFortReplayFXState& FX_State, int32 CallFunc_SelectInt_ReturnValue);
	void SetTPAutoFollowWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1);
	void SetTPDistanceToSubjectWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetNormalizedDistance_ReturnValue);
	void ResetToDefault();
	void CenterOnTab();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType);
	void SetWidgetValues();
	void InitializeWidgets();
	void BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void Destruct();
	void BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void Construct();
	void OnActivated();
	void BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void ExecuteUbergraph_FortReplayCameraSettingsTab(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class AFortPlayerControllerSpectating* K2Node_Event_FortPlayerControllerSpectating, enum class ESpectatorCameraType K2Node_Event_CameraType, class UFortReplayContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array2, TArray<class FText>& K2Node_MakeArray_Array3, int32 K2Node_ComponentBoundEvent_Selected_Index7, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index6, bool CallFunc_Greater_IntInt_ReturnValue1, int32 K2Node_ComponentBoundEvent_Selected_Index5, bool CallFunc_Greater_IntInt_ReturnValue2, int32 K2Node_ComponentBoundEvent_Selected_Index4, bool CallFunc_Greater_IntInt_ReturnValue3, int32 K2Node_ComponentBoundEvent_Selected_Index3, float K2Node_ComponentBoundEvent_Slider_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 K2Node_ComponentBoundEvent_Selected_Index2, bool CallFunc_Greater_IntInt_ReturnValue4, TArray<class FText>& K2Node_MakeArray_Array4, int32 K2Node_ComponentBoundEvent_Selected_Index1, bool CallFunc_Greater_IntInt_ReturnValue5, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array5, class UFortReplayContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortReplayContext* CallFunc_GetContext_ReturnValue3, class UFortReplayContext* CallFunc_GetContext_ReturnValue4, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator1, bool K2Node_DynamicCast_bSuccess2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_GetNameplatesEnabled_ReturnValue, bool CallFunc_GetOutlinesEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator2, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_GetRelevancyZoneVisible_ReturnValue, int32 CallFunc_SelectInt_ReturnValue2, bool CallFunc_GetDamageFXEnabled_ReturnValue, bool Temp_bool_Variable1, int32 CallFunc_SelectInt_ReturnValue3, enum class ESlateVisibility K2Node_Select1_Default, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Greater_IntInt_ReturnValue6, TArray<class FText>& K2Node_MakeArray_Array6, bool CallFunc_GetShareLensSettingsEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue4);
};

}


