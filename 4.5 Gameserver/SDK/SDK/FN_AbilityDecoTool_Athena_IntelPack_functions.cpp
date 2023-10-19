#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C
// (Actor)

class UClass* AAbilityDecoTool_Athena_IntelPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityDecoTool_Athena_IntelPack_C");

	return Clss;
}


// AbilityDecoTool_Athena_IntelPack_C AbilityDecoTool_Athena_IntelPack.Default__AbilityDecoTool_Athena_IntelPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbilityDecoTool_Athena_IntelPack_C* AAbilityDecoTool_Athena_IntelPack_C::GetDefaultObj()
{
	static class AAbilityDecoTool_Athena_IntelPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbilityDecoTool_Athena_IntelPack_C*>(AAbilityDecoTool_Athena_IntelPack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_Athena_IntelPack_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_IntelPack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "BPPressTrigger");

	Params::AAbilityDecoTool_Athena_IntelPack_C_BPPressTrigger_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_IntelPack_C::ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack");

	Params::AAbilityDecoTool_Athena_IntelPack_C_ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}

}


