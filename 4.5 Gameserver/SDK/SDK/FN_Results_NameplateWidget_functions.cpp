#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_NameplateWidget.Results_NameplateWidget_C
// (None)

class UClass* UResults_NameplateWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_NameplateWidget_C");

	return Clss;
}


// Results_NameplateWidget_C Results_NameplateWidget.Default__Results_NameplateWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_NameplateWidget_C* UResults_NameplateWidget_C::GetDefaultObj()
{
	static class UResults_NameplateWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_NameplateWidget_C*>(UResults_NameplateWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_NameplateWidget.Results_NameplateWidget_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_NameplateWidget_C::Outro(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "Outro");

	Params::UResults_NameplateWidget_C_Outro_Params Parms{};

	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_NameplateWidget_C::Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// class FText                        K2Node_Select_Default                                            (None)

void UResults_NameplateWidget_C::Initialize(enum class EFortCompletionResult Result, enum class EFortCompletionResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "Initialize");

	Params::UResults_NameplateWidget_C_Initialize_Params Parms{};

	Parms.Result = Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_97_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_NameplateWidget_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_97_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_97_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_121_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_NameplateWidget_C::BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_121_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_121_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_NameplateWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.ExecuteUbergraph_Results_NameplateWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_NameplateWidget_C::ExecuteUbergraph_Results_NameplateWidget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "ExecuteUbergraph_Results_NameplateWidget");

	Params::UResults_NameplateWidget_C_ExecuteUbergraph_Results_NameplateWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_NameplateWidget.Results_NameplateWidget_C.IntroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_NameplateWidget_C::IntroComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_NameplateWidget_C", "IntroComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


