#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginCredentialSelect.LoginCredentialSelect_C
// (None)

class UClass* ULoginCredentialSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginCredentialSelect_C");

	return Clss;
}


// LoginCredentialSelect_C LoginCredentialSelect.Default__LoginCredentialSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginCredentialSelect_C* ULoginCredentialSelect_C::GetDefaultObj()
{
	static class ULoginCredentialSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginCredentialSelect_C*>(ULoginCredentialSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoginCredentialSelect.LoginCredentialSelect_C.UpdateTextFieldsFromRuntimeOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)

void ULoginCredentialSelect_C::UpdateTextFieldsFromRuntimeOptions(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginCredentialSelect_C", "UpdateTextFieldsFromRuntimeOptions");

	Params::ULoginCredentialSelect_C_UpdateTextFieldsFromRuntimeOptions_Params Parms{};

	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginCredentialSelect.LoginCredentialSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoginCredentialSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginCredentialSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginCredentialSelect.LoginCredentialSelect_C.OnHotfixApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginCredentialSelect_C::OnHotfixApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginCredentialSelect_C", "OnHotfixApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginCredentialSelect.LoginCredentialSelect_C.ExecuteUbergraph_LoginCredentialSelect
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInviteUIDisabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginCredentialSelect_C::ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsInviteUIDisabled_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginCredentialSelect_C", "ExecuteUbergraph_LoginCredentialSelect");

	Params::ULoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsInviteUIDisabled_ReturnValue = CallFunc_IsInviteUIDisabled_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue1 = CallFunc_GetRuntimeOptions_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


