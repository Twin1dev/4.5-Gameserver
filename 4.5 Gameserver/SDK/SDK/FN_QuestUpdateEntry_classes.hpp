#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x289 - 0x240)
// WidgetBlueprintGeneratedClass QuestUpdateEntry.QuestUpdateEntry_C
class UQuestUpdateEntry_C : public UFortQuestUpdateEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         OuterBorder;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestName;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Separator;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  AllQuestUpdatesFinished_0;                         // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDynamicQuestUpdateInfo>       QuestUpdates;                                      // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          PostUpdatesDelayTimerHandle;                       // 0x280(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bConfigureAsAnnouncement;                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UQuestUpdateEntry_C* GetDefaultObj();

	void StartQuestIntroBP();
	void SetupAsAnnouncement();
	void QuestItemSet(class UFortQuestItem* QuestItemToCheck);
	void StartQuestOutro();
	void StartQuestIntro();
	void ExecuteUbergraph_QuestUpdateEntry(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue1, class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UFortQuestItem* K2Node_Event_QuestItemToCheck, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void AllQuestUpdatesFinished_0__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget);
};

}


