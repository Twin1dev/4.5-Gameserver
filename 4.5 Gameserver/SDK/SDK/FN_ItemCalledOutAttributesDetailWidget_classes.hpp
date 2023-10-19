#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x280 - 0x258)
// WidgetBlueprintGeneratedClass ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C
class UItemCalledOutAttributesDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UFortItemCategoryIndicator*            AmmoTypeIndicator;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              ContainerWrapBox;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UStatsListItemWIdget_C*>        StatWidgets;                                       // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UItemCalledOutAttributesDetailWidget_C* GetDefaultObj();

	void Clear_Stats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStatsListItemWIdget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateStats(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable1, class UStatsListItemWIdget_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetDisplayAttributesToCallOut_Attributes, class UStatsListItemWIdget_C* CallFunc_Create_ReturnValue, const struct FFortDisplayAttribute& CallFunc_Array_Get_Item1, class UWrapBoxSlot* CallFunc_AddChildWrapBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FFortDisplayAttribute& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetDisplayAttributesToCallOut(TArray<struct FFortDisplayAttribute>* Attributes, const TArray<struct FGameplayTag>& Tokens, const TArray<struct FFortDisplayAttribute>& Results, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& K2Node_MakeArray_Array1, TArray<struct FGameplayTag>& K2Node_MakeArray_Array2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithNetID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const struct FFortDisplayAttribute& CallFunc_GetTooltipStat_OutDisplayAttribute, bool CallFunc_GetTooltipStat_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EFortItemType K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void HandlePostDifferentItemToDetailSet();
	void HandleItemToDetailChangedBP();
	void ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortItemType K2Node_Select_Default, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, bool Temp_bool_Variable1, bool CallFunc_Array_Contains_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default);
};

}


