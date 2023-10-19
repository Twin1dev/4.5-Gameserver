#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
// (None)

class UClass* UMenuScreen_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuScreen_Athena_C");

	return Clss;
}


// MenuScreen_Athena_C MenuScreen_Athena.Default__MenuScreen_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuScreen_Athena_C* UMenuScreen_Athena_C::GetDefaultObj()
{
	static class UMenuScreen_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuScreen_Athena_C*>(UMenuScreen_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuScreen_Athena.MenuScreen_Athena_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.AnimNotify_LeftB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::AnimNotify_LeftB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimNotify_LeftB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.UserFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::UserFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "UserFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::AnimNotify_playFacialAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "AnimNotify_playFacialAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1
// (BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D
// (BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A
// (BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22
// (BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuScreen_Athena_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "BlueprintUpdateAnimation");

	Params::UMenuScreen_Athena_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.ExecuteUbergraph_MenuScreen_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuScreen_Athena_C::ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "ExecuteUbergraph_MenuScreen_Athena");

	Params::UMenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuScreen_Athena.MenuScreen_Athena_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuScreen_Athena_C::MenuScreenDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuScreen_Athena_C", "MenuScreenDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


