#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x228 - 0x218)
// WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C
class UAnnouncement_QuestUpdate_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UQuestUpdateEntry_C*                   QuestUpdateEntry;                                  // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnnouncement_QuestUpdate_C* GetDefaultObj();

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
	void ExecuteUbergraph_Announcement_QuestUpdate(int32 EntryPoint, class AFortClientAnnouncement* K2Node_Event_Announcement1, class AAnnounce_QuestUpdate_C* K2Node_DynamicCast_AsAnnounce_Quest_Update, bool K2Node_DynamicCast_bSuccess, class AFortClientAnnouncement* K2Node_Event_Announcement);
};

}


