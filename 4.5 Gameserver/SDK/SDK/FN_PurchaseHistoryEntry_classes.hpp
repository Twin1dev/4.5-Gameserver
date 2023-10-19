#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x8E1 - 0x8A8)
// WidgetBlueprintGeneratedClass PurchaseHistoryEntry.PurchaseHistoryEntry_C
class UPurchaseHistoryEntry_C : public UFortPurchaseHistoryEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A8(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_ItemBackground;                       // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Arrow;                                       // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_RefundStatus;                             // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Purchased;                                    // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Refunded;                                     // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         DEVisDisabled;                                     // 0x8E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPurchaseHistoryEntry_C* GetDefaultObj();

	void DisableAppearance(bool IsDisabled);
	void PreConstruct(bool IsDesignTime);
	void SetPurchaseText(class FText& PurchaseText, bool bHasBeenRefunded);
	void ExecuteUbergraph_PurchaseHistoryEntry(int32 EntryPoint, class FText K2Node_Event_PurchaseText, bool K2Node_Event_bHasBeenRefunded, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_CustomEvent_isDisabled, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable2, class UMaterialInterface* K2Node_Select2_Default);
};

}


