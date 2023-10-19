#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2C8 - 0x240)
// WidgetBlueprintGeneratedClass HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C
class UHUDLayoutToolPropertyPanel_C : public UHUDLayoutToolPropertyPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     Button_Exit;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_FireMode;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_Reset;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BuildCheckMark;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CombatCheckMark;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolPropertyWidget_C*        Property_0;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolPropertyWidget_C*        Property_1;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolPropertyWidget_C*        Property_2;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolPropertyWidget_C*        Property_3;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PropertyBox;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       TheSwitcher;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ToggleBuildMode;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ToggleCombatMode;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VertBox_ControlMode;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VertBox_Properties;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                    ModeButtonGroup;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUDLayoutToolPropertyPanel_C* GetDefaultObj();

	void Create_Button_Group(class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue);
	void DialogResult_AF5C9445415C4E1B90396695176ABE9D(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_F2CDB04A4E10D4703C778A8755E63C4E(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Open();
	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
	void ExecuteUbergraph_HUDLayoutToolPropertyPanel(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsLayoutDirty_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_HasSelectedWidget_ReturnValue, bool Temp_bool_Variable1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, class FText K2Node_Select_Default, bool CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button6, bool K2Node_ComponentBoundEvent_Selected1, class UCommonButton* K2Node_ComponentBoundEvent_Button5, bool K2Node_ComponentBoundEvent_Selected, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, enum class EFortDialogResult Temp_byte_Variable3, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsValid_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FName Temp_name_Variable1, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, enum class ESlateVisibility Temp_byte_Variable4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue5, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue6, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_HasSavedLayout_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue8, enum class ESlateVisibility Temp_byte_Variable5, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue9, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UHUDLayoutToolPlacementWidget* K2Node_Event_NewlySelectedWidget, class UWidget* K2Node_Select2_Default, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue10, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue11, bool CallFunc_GetPropertyMenuState_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_HasSelectedWidget_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue13, bool Temp_bool_Variable4, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default);
};

}


