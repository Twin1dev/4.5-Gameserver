#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C
// (None)

class UClass* UGAB_ShielderAttachPawnEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_ShielderAttachPawnEvents_C");

	return Clss;
}


// GAB_ShielderAttachPawnEvents_C GAB_ShielderAttachPawnEvents.Default__GAB_ShielderAttachPawnEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_ShielderAttachPawnEvents_C* UGAB_ShielderAttachPawnEvents_C::GetDefaultObj()
{
	static class UGAB_ShielderAttachPawnEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_ShielderAttachPawnEvents_C*>(UGAB_ShielderAttachPawnEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_ShielderAttachPawnEvents_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_ShielderAttachPawnEvents_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_ShielderAttachPawnEvents_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C.ExecuteUbergraph_GAB_ShielderAttachPawnEvents
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UObject*                     CallFunc_GetCurrentSourceObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_ShielderAttachPawnEvents_C::ExecuteUbergraph_GAB_ShielderAttachPawnEvents(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, bool Temp_bool_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_ShielderAttachPawnEvents_C", "ExecuteUbergraph_GAB_ShielderAttachPawnEvents");

	Params::UGAB_ShielderAttachPawnEvents_C_ExecuteUbergraph_GAB_ShielderAttachPawnEvents_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetCurrentSourceObject_ReturnValue = CallFunc_GetCurrentSourceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsShielder_Pawn = K2Node_DynamicCast_AsShielder_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


