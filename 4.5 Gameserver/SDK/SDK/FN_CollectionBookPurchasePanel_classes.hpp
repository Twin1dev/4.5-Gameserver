#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x2B8 - 0x210)
// WidgetBlueprintGeneratedClass CollectionBookPurchasePanel.CollectionBookPurchasePanel_C
class UCollectionBookPurchasePanel_C : public UCommonUserWidget
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
	class UFortItem*                             ItemToResearch;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCollectionBookPurchaseWidget_C*       OwningPurchaseWidget;                              // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         ResearchCosts;                                     // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bHasRequiredCatalysts;                             // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasRequiredResources;                             // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ResearchCatalysts;                                 // 0x278(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   ResearchAction;                                    // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   RecruitAction;                                     // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UCollectionBookPurchasePanel_C* GetDefaultObj();

	void CenterButtonHack(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void PopulateError(class FText ErrorText, int32 Temp_int_Variable, class UTooltipMinusDescriptionText_C* CallFunc_Create_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UActionWarning_C* CallFunc_Create_ReturnValue1, bool Temp_bool_Variable, class FText Temp_text_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void PopulateCosts(bool* bHasRequiredResources, class UItemCountOverCost_C* NewCostWidget, bool HasResources, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, class UItemCountOverCost_C* CallFunc_Create_ReturnValue, class UItemCountOverCost_C* CallFunc_Create_ReturnValue1, bool CallFunc_HasRequired_bHasRequired, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2);
	void SetOwningPurchaseWidget(class UCollectionBookPurchaseWidget_C* OwningPurchaseWidget);
	void SetItem(class UFortItem* Item, const struct FFortCollectionBookSlotData& SlotData, bool bIsPerson, enum class EFortItemType CallFunc_GetType_ReturnValue, const struct FFortCollectionBookDirectPurchaseData& CallFunc_GetPurchaseCostsRow_OutRow, bool CallFunc_GetPurchaseCostsRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_PopulateCosts_bHasRequiredResources, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasGameplayTagContainerExact_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_CollectionBookPurchasePanel(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PurchaseItem_ReturnValue);
};

}


