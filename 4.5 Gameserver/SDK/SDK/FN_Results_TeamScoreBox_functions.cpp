#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_TeamScoreBox.Results_TeamScoreBox_C
// (None)

class UClass* UResults_TeamScoreBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_TeamScoreBox_C");

	return Clss;
}


// Results_TeamScoreBox_C Results_TeamScoreBox.Default__Results_TeamScoreBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_TeamScoreBox_C* UResults_TeamScoreBox_C::GetDefaultObj()
{
	static class UResults_TeamScoreBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_TeamScoreBox_C*>(UResults_TeamScoreBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::SkipToFinalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "SkipToFinalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInterpolatingNumericValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreBox_C::SetSkippingToEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "SetSkippingToEnd");

	Params::UResults_TeamScoreBox_C_SetSkippingToEnd_Params Parms{};

	Parms.CallFunc_IsInterpolatingNumericValue_ReturnValue = CallFunc_IsInterpolatingNumericValue_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.UpdateFlashTextType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ColorWhite                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimePassed                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UResults_TeamScoreBox_C::UpdateFlashTextType(const struct FLinearColor& ColorWhite, float TimePassed, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "UpdateFlashTextType");

	Params::UResults_TeamScoreBox_C_UpdateFlashTextType_Params Parms{};

	Parms.ColorWhite = ColorWhite;
	Parms.TimePassed = TimePassed;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.FlashTextType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UResults_TeamScoreBox_C::FlashTextType(float CallFunc_GetGameTimeInSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "FlashTextType");

	Params::UResults_TeamScoreBox_C_FlashTextType_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIScoreType        ScoreType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScoreBox_C::Initialize(enum class EFortUIScoreType ScoreType, int32 Score, float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Initialize");

	Params::UResults_TeamScoreBox_C_Initialize_Params Parms{};

	Parms.ScoreType = ScoreType;
	Parms.Score = Score;
	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.InitializeScoreType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Edit, BlueprintVisible)
// struct FFortScoreStylingInfo       CallFunc_GetScoreStylingData_ScoreStylingInfo                    (None)
// bool                               CallFunc_GetScoreStylingData_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreBox_C::InitializeScoreType(class UTexture2D* Texture, const struct FLinearColor& Color, class FText Text, const struct FFortScoreStylingInfo& CallFunc_GetScoreStylingData_ScoreStylingInfo, bool CallFunc_GetScoreStylingData_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "InitializeScoreType");

	Params::UResults_TeamScoreBox_C_InitializeScoreType_Params Parms{};

	Parms.Texture = Texture;
	Parms.Color = Color;
	Parms.Text = Text;
	Parms.CallFunc_GetScoreStylingData_ScoreStylingInfo = CallFunc_GetScoreStylingData_ScoreStylingInfo;
	Parms.CallFunc_GetScoreStylingData_ReturnValue = CallFunc_GetScoreStylingData_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Intro Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Count Up Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Count_Up_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Count Up Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Count Down Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Count_Down_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Count Down Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "PreConstruct");

	Params::UResults_TeamScoreBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Text Count Up Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Text_Count_Up_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Text Count Up Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Text Count Down Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Text_Count_Down_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Text Count Down Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Skip Count Interpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Skip_Count_Interpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Skip Count Interpolation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.Stop Count Down Absorption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::Stop_Count_Down_Absorption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "Stop Count Down Absorption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadCompleted                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreBox_C::BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	Params::UResults_TeamScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.ExecuteUbergraph_Results_TeamScoreBox
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
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonNumericTextBlock*     K2Node_ComponentBoundEvent_NumericTextBlock                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_HadCompleted                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreBox_C::ExecuteUbergraph_Results_TeamScoreBox(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, int32 CallFunc_RandomIntegerInRange_ReturnValue1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_NotEqual_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "ExecuteUbergraph_Results_TeamScoreBox");

	Params::UResults_TeamScoreBox_C_ExecuteUbergraph_Results_TeamScoreBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1 = CallFunc_RandomIntegerInRange_ReturnValue1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_NumericTextBlock = K2Node_ComponentBoundEvent_NumericTextBlock;
	Parms.K2Node_ComponentBoundEvent_HadCompleted = K2Node_ComponentBoundEvent_HadCompleted;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue1 = CallFunc_NotEqual_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.IntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::IntroFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "IntroFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.CountDownFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::CountDownFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "CountDownFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_TeamScoreBox.Results_TeamScoreBox_C.CountUpFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreBox_C::CountUpFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_TeamScoreBox_C", "CountUpFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


