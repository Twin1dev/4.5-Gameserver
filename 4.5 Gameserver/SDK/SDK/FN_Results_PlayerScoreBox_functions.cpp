#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Results_PlayerScoreBox.Results_PlayerScoreBox_C
// (None)

class UClass* UResults_PlayerScoreBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Results_PlayerScoreBox_C");

	return Clss;
}


// Results_PlayerScoreBox_C Results_PlayerScoreBox.Default__Results_PlayerScoreBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResults_PlayerScoreBox_C* UResults_PlayerScoreBox_C::GetDefaultObj()
{
	static class UResults_PlayerScoreBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResults_PlayerScoreBox_C*>(UResults_PlayerScoreBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.GetIsValidScoreBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsValidScoreBox                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreBox_C::GetIsValidScoreBox(bool* bIsValidScoreBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "GetIsValidScoreBox");

	Params::UResults_PlayerScoreBox_C_GetIsValidScoreBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsValidScoreBox != nullptr)
		*bIsValidScoreBox = Parms.bIsValidScoreBox;

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsValidScoreBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsValidScoreBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreBox_C::SetIsValidScoreBox(bool bIsValidScoreBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "SetIsValidScoreBox");

	Params::UResults_PlayerScoreBox_C_SetIsValidScoreBox_Params Parms{};

	Parms.bIsValidScoreBox = bIsValidScoreBox;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInterpolatingNumericValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreBox_C::SetSkippingToEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "SetSkippingToEnd");

	Params::UResults_PlayerScoreBox_C_SetSkippingToEnd_Params Parms{};

	Parms.CallFunc_IsInterpolatingNumericValue_ReturnValue = CallFunc_IsInterpolatingNumericValue_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.SetIsBestScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsBestScore                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                ScoreColor                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Texture                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreBox_C::SetIsBestScore(bool bIsBestScore, const struct FLinearColor& ScoreColor, class UTexture* Texture, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "SetIsBestScore");

	Params::UResults_PlayerScoreBox_C_SetIsBestScore_Params Parms{};

	Parms.bIsBestScore = bIsBestScore;
	Parms.ScoreColor = ScoreColor;
	Parms.Texture = Texture;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_PlayerScoreBox_C::Initialize(int32 Score, float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "Initialize");

	Params::UResults_PlayerScoreBox_C_Initialize_Params Parms{};

	Parms.Score = Score;
	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "PreConstruct");

	Params::UResults_PlayerScoreBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_PlayerScoreBox_C::Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "Intro Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_PlayerScoreBox_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_PlayerScoreBox_C::Count_Sequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "Count Sequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.Skipped Count Interpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_PlayerScoreBox_C::Skipped_Count_Interpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "Skipped Count Interpolation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadCompleted                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreBox_C::BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature");

	Params::UResults_PlayerScoreBox_C_BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_PlayerScoreBox.Results_PlayerScoreBox_C.ExecuteUbergraph_Results_PlayerScoreBox
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     K2Node_ComponentBoundEvent_NumericTextBlock                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_HadCompleted                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_PlayerScoreBox_C::ExecuteUbergraph_Results_PlayerScoreBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_RandomBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Results_PlayerScoreBox_C", "ExecuteUbergraph_Results_PlayerScoreBox");

	Params::UResults_PlayerScoreBox_C_ExecuteUbergraph_Results_PlayerScoreBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_NumericTextBlock = K2Node_ComponentBoundEvent_NumericTextBlock;
	Parms.K2Node_ComponentBoundEvent_HadCompleted = K2Node_ComponentBoundEvent_HadCompleted;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


