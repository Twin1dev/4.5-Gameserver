#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_TeamScore.Results_TeamScore_C
// (None)

class UClass* UResults_TeamScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_TeamScore_C");

	return Clss;
}


// Results_TeamScore_C Results_TeamScore.Default__Results_TeamScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_TeamScore_C* UResults_TeamScore_C::GetDefaultObj()
{
	static class UResults_TeamScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_TeamScore_C*>(UResults_TeamScore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_TeamScore.Results_TeamScore_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Focus");

	Params::UResults_TeamScore_C_Focus_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.InitializeDelays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::InitializeDelays(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "InitializeDelays");

	Params::UResults_TeamScore_C_InitializeDelays_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue5 = CallFunc_Divide_FloatFloat_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::SkipToFinalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "SkipToFinalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeamTotalScore_C*   TeamTotalScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UResults_TeamScore_C::Initialize(class UFortUIScoreReport* ScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Initialize");

	Params::UResults_TeamScore_C_Initialize_Params Parms{};

	Parms.ScoreReport = ScoreReport;
	Parms.TeamTotalScore = TeamTotalScore;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Intro Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.Count Total Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Count_Total_Score_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Count Total Score Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.Count Team Scores Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Count_Team_Scores_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Count Team Scores Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.Skip To End  Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Skip_To_End__Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Skip To End  Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.On Count Score Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::On_Count_Score_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "On Count Score Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.Skip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Skip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Skip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UResults_TeamScore_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScore.Results_TeamScore_C.ExecuteUbergraph_Results_TeamScore
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::ExecuteUbergraph_Results_TeamScore(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue8, bool CallFunc_BooleanOR_ReturnValue9, bool CallFunc_BooleanOR_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue11, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue13, bool CallFunc_BooleanOR_ReturnValue14, bool CallFunc_BooleanOR_ReturnValue15, bool CallFunc_BooleanOR_ReturnValue16, bool CallFunc_BooleanOR_ReturnValue17, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "ExecuteUbergraph_Results_TeamScore");

	Params::UResults_TeamScore_C_ExecuteUbergraph_Results_TeamScore_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue6;
	Parms.CallFunc_BooleanOR_ReturnValue7 = CallFunc_BooleanOR_ReturnValue7;
	Parms.CallFunc_BooleanOR_ReturnValue8 = CallFunc_BooleanOR_ReturnValue8;
	Parms.CallFunc_BooleanOR_ReturnValue9 = CallFunc_BooleanOR_ReturnValue9;
	Parms.CallFunc_BooleanOR_ReturnValue10 = CallFunc_BooleanOR_ReturnValue10;
	Parms.CallFunc_BooleanOR_ReturnValue11 = CallFunc_BooleanOR_ReturnValue11;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_BooleanOR_ReturnValue13 = CallFunc_BooleanOR_ReturnValue13;
	Parms.CallFunc_BooleanOR_ReturnValue14 = CallFunc_BooleanOR_ReturnValue14;
	Parms.CallFunc_BooleanOR_ReturnValue15 = CallFunc_BooleanOR_ReturnValue15;
	Parms.CallFunc_BooleanOR_ReturnValue16 = CallFunc_BooleanOR_ReturnValue16;
	Parms.CallFunc_BooleanOR_ReturnValue17 = CallFunc_BooleanOR_ReturnValue17;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScore_C", "Finished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


