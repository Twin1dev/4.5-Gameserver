#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x210 - 0x208)
// WidgetBlueprintGeneratedClass ErrorCodeOverflowItem.ErrorCodeOverflowItem_C
class UErrorCodeOverflowItem_C : public UUserWidget
{
public:
	class UTextBlock*                            TextBlock_332;                                     // 0x208(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UErrorCodeOverflowItem_C* GetDefaultObj();

	void SetErrorCodeDisplay(const class FString& ErrorCode, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


