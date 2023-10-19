#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TT_Constructor_BullRush.TT_Constructor_BullRush_C
// (None)

class UClass* UTT_Constructor_BullRush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TT_Constructor_BullRush_C");

	return Clss;
}


// TT_Constructor_BullRush_C TT_Constructor_BullRush.Default__TT_Constructor_BullRush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTT_Constructor_BullRush_C* UTT_Constructor_BullRush_C::GetDefaultObj()
{
	static class UTT_Constructor_BullRush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTT_Constructor_BullRush_C*>(UTT_Constructor_BullRush_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetApplicationTag
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutTag                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTT_Constructor_BullRush_C::GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Constructor_BullRush_C", "GetApplicationTag");

	Params::UTT_Constructor_BullRush_C_GetApplicationTag_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTag != nullptr)
		*OutTag = std::move(Parms.OutTag);

	return Parms.ReturnValue;

}


// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Constructor_BullRush_C*  K2Node_DynamicCast_AsGA_Constructor_Bull_Rush                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable3                                              (None)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        K2Node_Select1_Default                                           (None)
// class FText                        Temp_text_Variable5                                              (None)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           (None)

bool UTT_Constructor_BullRush_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, bool Temp_bool_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Constructor_BullRush_C* K2Node_DynamicCast_AsGA_Constructor_Bull_Rush, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText K2Node_Select_Default, class FText Temp_text_Variable3, bool Temp_bool_Variable1, class FText Temp_text_Variable4, class FText K2Node_Select1_Default, class FText Temp_text_Variable5, bool Temp_bool_Variable2, class FText K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Constructor_BullRush_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Constructor_BullRush_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Constructor_Bull_Rush = K2Node_DynamicCast_AsGA_Constructor_Bull_Rush;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}


// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Constructor_BullRush_C*  K2Node_DynamicCast_AsGA_Constructor_Bull_Rush                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Constructor_BullRush_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Constructor_BullRush_C* K2Node_DynamicCast_AsGA_Constructor_Bull_Rush, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TT_Constructor_BullRush_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Constructor_BullRush_C_InitializeAbilityInstanceInternal_Params Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Constructor_Bull_Rush = K2Node_DynamicCast_AsGA_Constructor_Bull_Rush;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


