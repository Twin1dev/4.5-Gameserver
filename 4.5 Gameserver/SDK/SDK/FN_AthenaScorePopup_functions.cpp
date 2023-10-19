#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaScorePopup.AthenaScorePopup_C
// (None)

class UClass* UAthenaScorePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaScorePopup_C");

	return Clss;
}


// AthenaScorePopup_C AthenaScorePopup.Default__AthenaScorePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaScorePopup_C* UAthenaScorePopup_C::GetDefaultObj()
{
	static class UAthenaScorePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaScorePopup_C*>(UAthenaScorePopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaScorePopup.AthenaScorePopup_C.ResetSoundPitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaScorePopup_C::ResetSoundPitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "ResetSoundPitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaScorePopup.AthenaScorePopup_C.IncrementSoundPitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaScorePopup_C::IncrementSoundPitch(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "IncrementSoundPitch");

	Params::UAthenaScorePopup_C_IncrementSoundPitch_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaScorePopup.AthenaScorePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaScorePopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaScorePopup.AthenaScorePopup_C.OnNewScoreEarned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              NewScoreValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewScoreTypeText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              BigScoreThreshold                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaScorePopup_C::OnNewScoreEarned(int32 NewScoreValue, class FText& NewScoreTypeText, int32 BigScoreThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "OnNewScoreEarned");

	Params::UAthenaScorePopup_C_OnNewScoreEarned_Params Parms{};

	Parms.NewScoreValue = NewScoreValue;
	Parms.NewScoreTypeText = NewScoreTypeText;
	Parms.BigScoreThreshold = BigScoreThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaScorePopup.AthenaScorePopup_C.Timeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaScorePopup_C::Timeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "Timeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaScorePopup.AthenaScorePopup_C.ScoreComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaScorePopup_C::ScoreComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "ScoreComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaScorePopup.AthenaScorePopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaScorePopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "PreConstruct");

	Params::UAthenaScorePopup_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaScorePopup.AthenaScorePopup_C.ExecuteUbergraph_AthenaScorePopup
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NewScoreValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_NewScoreTypeText                                    (ConstParm)
// int32                              K2Node_Event_BigScoreThreshold                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaScorePopup_C::ExecuteUbergraph_AthenaScorePopup(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, int32 K2Node_Event_NewScoreValue, class FText K2Node_Event_NewScoreTypeText, int32 K2Node_Event_BigScoreThreshold, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaScorePopup_C", "ExecuteUbergraph_AthenaScorePopup");

	Params::UAthenaScorePopup_C_ExecuteUbergraph_AthenaScorePopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.K2Node_Event_NewScoreValue = K2Node_Event_NewScoreValue;
	Parms.K2Node_Event_NewScoreTypeText = K2Node_Event_NewScoreTypeText;
	Parms.K2Node_Event_BigScoreThreshold = K2Node_Event_BigScoreThreshold;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


