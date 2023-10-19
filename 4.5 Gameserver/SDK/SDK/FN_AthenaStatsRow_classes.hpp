#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x250 - 0x210)
// WidgetBlueprintGeneratedClass AthenaStatsRow.AthenaStatsRow_C
class UAthenaStatsRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Name;                                              // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Value;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StatName;                                          // 0x228(0x18)(Edit, BlueprintVisible)
	class FString                                BaseGameplayTag;                                   // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaStatsRow_C* GetDefaultObj();

	void SetStatValueAsText(class FText StatValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaStatsRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


