#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x310 - 0x310)
// WidgetBlueprintGeneratedClass ItemTransformKeyPicker.ItemTransformKeyPicker_C
class UItemTransformKeyPicker_C : public UFortTransformKeyPicker
{
public:

	static class UClass* StaticClass();
	static class UItemTransformKeyPicker_C* GetDefaultObj();

	void NavigateToFirstItem(class UObject* CallFunc_BP_GetSelectedItem_ReturnValue);
	void NavigateToSelectedItem(class UFortItem* InItem, class UFortItem* Item);
	void GetSelectedKey(class UFortItem** SelectedKey, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess);
	void SetSelectedKey(class UFortAccountItem* AccountKey);
};

}


