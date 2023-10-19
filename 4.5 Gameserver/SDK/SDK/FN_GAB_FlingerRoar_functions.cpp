#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C
// (None)

class UClass* UGAB_FlingerRoar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_FlingerRoar_C");

	return Clss;
}


// GAB_FlingerRoar_C GAB_FlingerRoar.Default__GAB_FlingerRoar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_FlingerRoar_C* UGAB_FlingerRoar_C::GetDefaultObj()
{
	static class UGAB_FlingerRoar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_FlingerRoar_C*>(UGAB_FlingerRoar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnCancelled_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnCancelled_AD410E224F398036F9E428A39B02B87C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRoar_C", "OnCancelled_AD410E224F398036F9E428A39B02B87C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnInterrupted_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnInterrupted_AD410E224F398036F9E428A39B02B87C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRoar_C", "OnInterrupted_AD410E224F398036F9E428A39B02B87C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnBlendOut_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnBlendOut_AD410E224F398036F9E428A39B02B87C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRoar_C", "OnBlendOut_AD410E224F398036F9E428A39B02B87C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.OnCompleted_AD410E224F398036F9E428A39B02B87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::OnCompleted_AD410E224F398036F9E428A39B02B87C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRoar_C", "OnCompleted_AD410E224F398036F9E428A39B02B87C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_FlingerRoar_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRoar_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_FlingerRoar.GAB_FlingerRoar_C.ExecuteUbergraph_GAB_FlingerRoar
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FlingerRoar_C::ExecuteUbergraph_GAB_FlingerRoar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_FlingerRoar_C", "ExecuteUbergraph_GAB_FlingerRoar");

	Params::UGAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


