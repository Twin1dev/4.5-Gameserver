#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3C0 - 0x380)
// WidgetBlueprintGeneratedClass HUDLayoutTool.HUDLayoutTool_C
class UHUDLayoutTool_C : public UBacchusHUDLayoutToolPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HidePanel;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowPanel;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolFireModePanel_C*         HUDLayoutToolFireModePanel;                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolPropertyPanel_C*         HUDLayoutToolPropertyPanel;                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InfoButtonToggle;                                  // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        RecenterButton;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ArrowMID;                                          // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUDLayoutTool_C* GetDefaultObj();

	void BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Close_Tool();
	void On_Property_State_Change(bool bNewlyOpen);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_View_Offset_Update(const struct FVector2D& NewOffset);
	void Construct();
	void Tool_Is_Open();
	void ExecuteUbergraph_HUDLayoutTool(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FVector2D& CallFunc_GetCurrentOffset_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue5, bool K2Node_CustomEvent_bNewlyOpen, bool CallFunc_IsCentered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsPanning_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsSelectedWidgetUnderPanel_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue7, enum class ESlateVisibility K2Node_Select_Default, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue8, bool CallFunc_GetPropertyMenuState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, const struct FVector2D& K2Node_CustomEvent_NewOffset, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue9, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_Get_Dynamic_Material_Ret_Material, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue11, const struct FVector2D& CallFunc_GetCurrentOffset_ReturnValue1, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue12);
};

}


