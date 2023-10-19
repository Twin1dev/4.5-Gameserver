#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// WidgetBlueprintGeneratedClass QuestTrackerEntry.QuestTrackerEntry_C
class UQuestTrackerEntry_C : public UFortQuestTrackerEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(Transient, DuplicateTransient)
	class UImage*                                SeparatorLine;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuestTrackerEntry_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_QuestTrackerEntry(int32 EntryPoint);
};

}


