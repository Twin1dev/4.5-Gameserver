#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_TeamTotalScore.Results_TeamTotalScore_C
// (None)

class UClass* UResults_TeamTotalScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_TeamTotalScore_C");

	return Clss;
}


// Results_TeamTotalScore_C Results_TeamTotalScore.Default__Results_TeamTotalScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_TeamTotalScore_C* UResults_TeamTotalScore_C::GetDefaultObj()
{
	static class UResults_TeamTotalScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_TeamTotalScore_C*>(UResults_TeamTotalScore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeConvertScorePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::InitializeConvertScorePlayRate(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "InitializeConvertScorePlayRate");

	Params::UResults_TeamTotalScore_C_InitializeConvertScorePlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.InitializeCountScorePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::InitializeCountScorePlayRate(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "InitializeCountScorePlayRate");

	Params::UResults_TeamTotalScore_C_InitializeCountScorePlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToConvertScoreEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInterpolatingNumericValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::SetSkippingToConvertScoreEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "SetSkippingToConvertScoreEnd");

	Params::UResults_TeamTotalScore_C_SetSkippingToConvertScoreEnd_Params Parms{};

	Parms.CallFunc_IsInterpolatingNumericValue_ReturnValue = CallFunc_IsInterpolatingNumericValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToConvertScoreFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::SkipToConvertScoreFinalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "SkipToConvertScoreFinalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SetSkippingToCountScoreEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInterpolatingNumericValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::SetSkippingToCountScoreEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "SetSkippingToCountScoreEnd");

	Params::UResults_TeamTotalScore_C_SetSkippingToCountScoreEnd_Params Parms{};

	Parms.CallFunc_IsInterpolatingNumericValue_ReturnValue = CallFunc_IsInterpolatingNumericValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.SkipToCountScoreFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::SkipToCountScoreFinalState(float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "SkipToCountScoreFinalState");

	Params::UResults_TeamTotalScore_C_SkipToCountScoreFinalState_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          Score_Report                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamTotalScore_C::Initialize(class UFortUIScoreReport* Score_Report, int32 CallFunc_GetTeamScore_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue1, int32 CallFunc_GetTeamScore_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetTeamScore_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Initialize");

	Params::UResults_TeamTotalScore_C_Initialize_Params Parms{};

	Parms.Score_Report = Score_Report;
	Parms.CallFunc_GetTeamScore_ReturnValue = CallFunc_GetTeamScore_ReturnValue;
	Parms.CallFunc_GetTeamScore_ReturnValue1 = CallFunc_GetTeamScore_ReturnValue1;
	Parms.CallFunc_GetTeamScore_ReturnValue2 = CallFunc_GetTeamScore_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTeamScore_ReturnValue3 = CallFunc_GetTeamScore_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Intro Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "PreConstruct");

	Params::UResults_TeamTotalScore_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Convert_Score_Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Convert Score Intro Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Convert_Score_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Convert Score Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Interpolation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Interpolation_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Interpolation Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Convert Score Interpolation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Convert_Score_Interpolation_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Convert Score Interpolation Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Teleport Pad Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Teleport_Pad_Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Teleport Pad Intro Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadCompleted                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	Params::UResults_TeamTotalScore_C_BndEvt__TextTotalScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.ExecuteUbergraph_Results_TeamTotalScore
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     K2Node_ComponentBoundEvent_NumericTextBlock                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_HadCompleted                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamTotalScore_C::ExecuteUbergraph_Results_TeamTotalScore(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_NotEqual_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "ExecuteUbergraph_Results_TeamTotalScore");

	Params::UResults_TeamTotalScore_C_ExecuteUbergraph_Results_TeamTotalScore_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NumericTextBlock = K2Node_ComponentBoundEvent_NumericTextBlock;
	Parms.K2Node_ComponentBoundEvent_HadCompleted = K2Node_ComponentBoundEvent_HadCompleted;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue1 = CallFunc_NotEqual_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamTotalScore.Results_TeamTotalScore_C.Count Score Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamTotalScore_C::Count_Score_Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamTotalScore_C", "Count Score Finished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


