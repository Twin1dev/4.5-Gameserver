#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5CB (0x7DB - 0x210)
// WidgetBlueprintGeneratedClass ItemStackCounter.ItemStackCounter_C
class UItemStackCounter_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              _SizeBox_;                                         // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderBase;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCounter;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   MultiSizeBase;                                     // 0x230(0x330)(Edit, BlueprintVisible)
	struct FFortMultiSizeFont                    MultiSizeFont;                                     // 0x560(0x210)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                  MultiSizeMargin;                                   // 0x770(0x60)(Edit, BlueprintVisible, NoDestructor)
	enum class EFortBrushSize                    Brush_Size;                                        // 0x7D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x7D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysVisible;                                     // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TruncateValue;                                     // 0x7D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class ESlateVisibility                  VisibilityWithNoStack;                             // 0x7DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemStackCounter_C* GetDefaultObj();

	void Refresh_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Stack_Count(int32 Count, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Truncate_Integer_Value_Formatted_Value, class FText K2Node_Select_Default);
	void Update(enum class EFortBrushSize Brush_Size, int32 Count, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ItemStackCounter(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


