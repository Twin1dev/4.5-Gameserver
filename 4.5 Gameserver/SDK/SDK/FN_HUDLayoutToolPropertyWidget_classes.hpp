#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x280 - 0x240)
// WidgetBlueprintGeneratedClass HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C
class UHUDLayoutToolPropertyWidget_C : public UHUDLayoutToolPropertyWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UButton*                               Button_BoolToggle;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CheckBoxBox;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Checked;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Unchecked;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SliderBox;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_CheckBox;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUDLayoutToolPropertyWidget_C* GetDefaultObj();

	void SetPropertyType(enum class ELayoutPropertyType NewPropertyType);
	void SetBoolValue(bool bNewValue);
	void BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_HUDLayoutToolPropertyWidget(int32 EntryPoint, bool CallFunc_GetCurrentValueAsBool_ReturnValue, enum class ELayoutPropertyType Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, enum class ELayoutPropertyType K2Node_Event_NewPropertyType, bool K2Node_Event_bNewValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default);
};

}


