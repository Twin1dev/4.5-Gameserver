#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BasicProgressBar.BasicProgressBar_C
// (None)

class UClass* UBasicProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicProgressBar_C");

	return Clss;
}


// BasicProgressBar_C BasicProgressBar.Default__BasicProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBasicProgressBar_C* UBasicProgressBar_C::GetDefaultObj()
{
	static class UBasicProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicProgressBar_C*>(UBasicProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicProgressBar.BasicProgressBar_C.SetSecondaryBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::SetSecondaryBar(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "SetSecondaryBar");

	Params::UBasicProgressBar_C_SetSecondaryBar_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicProgressBar.BasicProgressBar_C.DecrementPrimaryByPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewHealthPercentage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicProgressBar_C::DecrementPrimaryByPercentage(float NewHealthPercentage, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "DecrementPrimaryByPercentage");

	Params::UBasicProgressBar_C_DecrementPrimaryByPercentage_Params Parms{};

	Parms.NewHealthPercentage = NewHealthPercentage;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicProgressBar.BasicProgressBar_C.SetPrimaryBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::SetPrimaryBarValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "SetPrimaryBarValue");

	Params::UBasicProgressBar_C_SetPrimaryBarValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicProgressBar.BasicProgressBar_C.UpdateHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::UpdateHealthBar(bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "UpdateHealthBar");

	Params::UBasicProgressBar_C_UpdateHealthBar_Params Parms{};

	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicProgressBar.BasicProgressBar_C.Toggle Timer for Secondary Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              TimerDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LoopTimer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UBasicProgressBar_C::Toggle_Timer_for_Secondary_Bar(bool IsEnabled, float TimerDuration, bool LoopTimer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "Toggle Timer for Secondary Bar");

	Params::UBasicProgressBar_C_Toggle_Timer_for_Secondary_Bar_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.TimerDuration = TimerDuration;
	Parms.LoopTimer = LoopTimer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicProgressBar.BasicProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBasicProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicProgressBar.BasicProgressBar_C.ExecuteUbergraph_BasicProgressBar
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::ExecuteUbergraph_BasicProgressBar(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicProgressBar_C", "ExecuteUbergraph_BasicProgressBar");

	Params::UBasicProgressBar_C_ExecuteUbergraph_BasicProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


