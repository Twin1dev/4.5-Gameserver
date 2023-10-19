#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
class UQuestUpdatesLog_C : public UFortQuestUpdatesLog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	struct FTimerHandle                          TryDisplayNextUpdateTimerHandle;                   // 0x280(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UQuestUpdatesLog_C* GetDefaultObj();

	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo* QuestItemToCheck);
	void ExecuteUbergraph_QuestUpdatesLog(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFortQuestObjectiveInfo* K2Node_Event_QuestItemToCheck, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, class AAnnounce_QuestUpdate_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array);
};

}


