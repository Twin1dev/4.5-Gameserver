#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8A (0x29A - 0x210)
// WidgetBlueprintGeneratedClass CollectionBookUnslotPanel.CollectionBookUnslotPanel_C
class UCollectionBookUnslotPanel_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UItemCountOverCost_C*                  Cost0;                                             // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCountOverCost_C*                  Cost1;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CostListBox;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UnableToPurchaseReasonBox;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             ItemToUnslot;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCollectionBookUnslotWidget_C*         OwningWidget;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollectionBookData*               CollectionBookData;                                // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 UnslotCatalysts;                                   // 0x268(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFortItemQuantityPair>         UnslotCosts;                                       // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bHasRequiredCatalysts;                             // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasRequiredResources;                             // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCollectionBookUnslotPanel_C* GetDefaultObj();

	void CenterButtonHack(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void PopulateError(class FText ErrorText, int32 Temp_int_Variable, class UTooltipMinusDescriptionText_C* CallFunc_Create_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class UActionWarning_C* CallFunc_Create_ReturnValue1, class UPanelSlot* CallFunc_AddChild_ReturnValue1, int32 K2Node_Select_Default, class FText Temp_text_Variable);
	void PopulateCosts(bool* bHasResources, class UItemCountOverCost_C* NewCostWidget, bool HasResources, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, bool CallFunc_HasRequired_bHasRequired, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemCountOverCost_C* CallFunc_Create_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, class UItemCountOverCost_C* CallFunc_Create_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2);
	void SetOwningUnslotWidget(class UCollectionBookUnslotWidget_C* OwningWidget);
	void SetItem(class UFortItem* Item, bool bIsPerson, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasGameplayTagContainerExact_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_PopulateCosts_bHasResources);
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_CollectionBookUnslotPanel(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UnSlotItem_ReturnValue);
};

}


