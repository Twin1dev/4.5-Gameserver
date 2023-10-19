#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x360 - 0x358)
// WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C
class UCollectionBookWidget_C : public UFortCollectionBookWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCollectionBookWidget_C* GetDefaultObj();

	void Construct();
	void SlotItemComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void Destruct();
	void OnActivated();
	void ExecuteUbergraph_CollectionBookWidget(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortAccountItem* K2Node_CustomEvent_ItemSlotted, class FName K2Node_CustomEvent_SlotId, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_CalculateBookXp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue2, class UCollectionBookPrimaryPanel_C* K2Node_DynamicCast_AsCollection_Book_Primary_Panel, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


