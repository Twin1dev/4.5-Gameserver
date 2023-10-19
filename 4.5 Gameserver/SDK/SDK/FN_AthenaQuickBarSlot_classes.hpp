#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x378 - 0x36F)
// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:
	uint8                                        Pad_4749[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaQuickBarSlot_C* GetDefaultObj();

	void UpdateJetpackFuelGaugeVisiblity(bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShowJetpackFuelGauge(class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess);
	void HideJetpackFuelGauge();
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnRefreshItem();
	void ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint);
};

}


