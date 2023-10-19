#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestTrackerMainQuestList.QuestTrackerMainQuestList_C
// (None)

class UClass* UQuestTrackerMainQuestList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestTrackerMainQuestList_C");

	return Clss;
}


// QuestTrackerMainQuestList_C QuestTrackerMainQuestList.Default__QuestTrackerMainQuestList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestTrackerMainQuestList_C* UQuestTrackerMainQuestList_C::GetDefaultObj()
{
	static class UQuestTrackerMainQuestList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestTrackerMainQuestList_C*>(UQuestTrackerMainQuestList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestTrackerMainQuestList.QuestTrackerMainQuestList_C.GetQuestsToDisplay
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetMainQuest_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestPinned_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class UFortQuestItem*> UQuestTrackerMainQuestList_C::GetQuestsToDisplay(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue, TArray<class UFortQuestItem*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsQuestPinned_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestTrackerMainQuestList_C", "GetQuestsToDisplay");

	Params::UQuestTrackerMainQuestList_C_GetQuestsToDisplay_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetMainQuest_ReturnValue = CallFunc_GetMainQuest_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsQuestPinned_ReturnValue = CallFunc_IsQuestPinned_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


