#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C
// (None)

class UClass* UQuestTrackerTrackedQuestsList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTrackerTrackedQuestsList_C");

	return Clss;
}


// QuestTrackerTrackedQuestsList_C QuestTrackerTrackedQuestsList.Default__QuestTrackerTrackedQuestsList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestTrackerTrackedQuestsList_C* UQuestTrackerTrackedQuestsList_C::GetDefaultObj()
{
	static class UQuestTrackerTrackedQuestsList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTrackerTrackedQuestsList_C*>(UQuestTrackerTrackedQuestsList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestTrackerTrackedQuestsList.QuestTrackerTrackedQuestsList_C.GetQuestsToDisplay
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestItem*>      CallFunc_GetPinnedQuests_OutPinnedQuestItems                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class UFortQuestItem*> UQuestTrackerTrackedQuestsList_C::GetQuestsToDisplay(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetPinnedQuests_OutPinnedQuestItems, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerTrackedQuestsList_C", "GetQuestsToDisplay");

	Params::UQuestTrackerTrackedQuestsList_C_GetQuestsToDisplay_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPinnedQuests_OutPinnedQuestItems = CallFunc_GetPinnedQuests_OutPinnedQuestItems;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


