#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANimBP_UnicornHorn.ANimBP_UnicornHorn_C
// (None)

class UClass* UANimBP_UnicornHorn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANimBP_UnicornHorn_C");

	return Clss;
}


// ANimBP_UnicornHorn_C ANimBP_UnicornHorn.Default__ANimBP_UnicornHorn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANimBP_UnicornHorn_C* UANimBP_UnicornHorn_C::GetDefaultObj()
{
	static class UANimBP_UnicornHorn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANimBP_UnicornHorn_C*>(UANimBP_UnicornHorn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E
// (BlueprintEvent)
// Parameters:

void UANimBP_UnicornHorn_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANimBP_UnicornHorn_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANimBP_UnicornHorn_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANimBP_UnicornHorn_C", "BlueprintUpdateAnimation");

	Params::UANimBP_UnicornHorn_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.ExecuteUbergraph_ANimBP_UnicornHorn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANimBP_UnicornHorn_C::ExecuteUbergraph_ANimBP_UnicornHorn(int32 EntryPoint, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANimBP_UnicornHorn_C", "ExecuteUbergraph_ANimBP_UnicornHorn");

	Params::UANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


