#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass RCControl_AnimBlueprint.RCControl_AnimBlueprint_C
// (None)

class UClass* URCControl_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCControl_AnimBlueprint_C");

	return Clss;
}


// RCControl_AnimBlueprint_C RCControl_AnimBlueprint.Default__RCControl_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCControl_AnimBlueprint_C* URCControl_AnimBlueprint_C::GetDefaultObj()
{
	static class URCControl_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCControl_AnimBlueprint_C*>(URCControl_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RCControl_AnimBlueprint.RCControl_AnimBlueprint_C.ExecuteUbergraph_RCControl_AnimBlueprint
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URCControl_AnimBlueprint_C::ExecuteUbergraph_RCControl_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RCControl_AnimBlueprint_C", "ExecuteUbergraph_RCControl_AnimBlueprint");

	Params::URCControl_AnimBlueprint_C_ExecuteUbergraph_RCControl_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


