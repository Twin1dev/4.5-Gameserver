#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x8B8 - 0x888)
// WidgetBlueprintGeneratedClass CustomFilterRow.CustomFilterRow_C
class UCustomFilterRow_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 CheckStateSwitcher;                                // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FilterText;                                        // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsChecked;                                        // 0x8A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortInventoryCustomFilter        Filter;                                            // 0x8A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4E7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCustomFilterToggled;                             // 0x8A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UCustomFilterRow_C* GetDefaultObj();

	void SetCheckedState(bool IsChecked, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 K2Node_Select_Default);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BP_OnClicked();
	void ExecuteUbergraph_CustomFilterRow(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnCustomFilterToggled__DelegateSignature(enum class EFortInventoryCustomFilter Filter, bool IsChecked);
};

}


