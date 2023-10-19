#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x9B8 - 0x898)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserRow.AthenaReplayBrowserRow_C
class UAthenaReplayBrowserRow_C : public UAthenaReplayBrowserEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_1;                                    // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Date;                                              // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Kills;                                             // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Length;                                            // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Mode;                                              // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Name;                                              // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProAmImage;                                        // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Rank;                                              // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RowHeightSB;                                       // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Size;                                              // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Version;                                           // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Views;                                             // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                SavedReplayBrush;                                  // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CorruptedReplayBrush;                              // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                UnsavedReplayBrush;                                // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FeaturedReplayBrush;                               // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaReplayBrowserRowData           DummyRowData;                                      // 0x920(0x90)(Edit, BlueprintVisible)
	float                                        NormalRowHeight;                                   // 0x9B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FeaturedRowHeight;                                 // 0x9B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaReplayBrowserRow_C* GetDefaultObj();

	class FText FormatLengthText(float Seconds, const class FString& Temp_string_Variable, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Refresh(const struct FAthenaReplayBrowserRowData& LocalRowData, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, float Temp_float_Variable, float Temp_float_Variable1, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue1, class FText CallFunc_FormatLengthText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_GetDateTimeText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue3, bool Temp_bool_Variable3, float K2Node_Select_Default, class UClass* K2Node_Select1_Default, class UClass* K2Node_Select2_Default, class UClass* K2Node_Select3_Default, class UAthenaReplayBrowserRowProxyInstance* K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable4, float K2Node_Select4_Default);
	void OnReplayBrowserEntryDataSet();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaReplayBrowserRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


