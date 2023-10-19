#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x248 - 0x248)
// WidgetBlueprintGeneratedClass QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C
class UQuestTrackerTrackedQuestsList_C : public UFortQuestTrackerList
{
public:

	static class UClass* StaticClass();
	static class UQuestTrackerTrackedQuestsList_C* GetDefaultObj();

	TArray<class UFortQuestItem*> GetQuestsToDisplay(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetPinnedQuests_OutPinnedQuestItems, bool CallFunc_IsValid_ReturnValue1);
};

}


