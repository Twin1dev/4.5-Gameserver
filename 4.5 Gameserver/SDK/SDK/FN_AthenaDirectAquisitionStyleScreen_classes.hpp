#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x421 - 0x408)
// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
class UAthenaDirectAquisitionStyleScreen_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              CameraFramingWidget;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*               ItemInfoHeader;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         OfferSet;                                          // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaDirectAquisitionStyleScreen_C* GetDefaultObj();

	void HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void OnActivated();
	void OnOfferSet();
	void UpdatePreviewVariants(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag);
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_VariantChannel, const struct FGameplayTag& K2Node_CustomEvent_VariantTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
};

}


