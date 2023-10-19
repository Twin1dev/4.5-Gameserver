#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// (None)

class UClass* UGAT_TriggeredAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_TriggeredAbility_C");

	return Clss;
}


// GAT_TriggeredAbility_C GAT_TriggeredAbility.Default__GAT_TriggeredAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_TriggeredAbility_C* UGAT_TriggeredAbility_C::GetDefaultObj()
{
	static class UGAT_TriggeredAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_TriggeredAbility_C*>(UGAT_TriggeredAbility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_TriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGAT_TriggeredAbility_C::ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_TriggeredAbility_C", "ExecuteUbergraph_GAT_TriggeredAbility");

	Params::UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


