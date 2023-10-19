#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3B0 - 0x398)
// BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C
class AAnnounce_QuestUpdate_C : public AFortClientAnnouncement
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestUpdateInfo               QuestUpdateInfo;                                   // 0x3A0(0x10)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnnounce_QuestUpdate_C* GetDefaultObj();

	void UserConstructionScript();
};

}


