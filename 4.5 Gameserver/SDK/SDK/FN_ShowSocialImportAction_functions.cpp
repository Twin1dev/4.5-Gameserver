#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShowSocialImportAction.ShowSocialImportAction_C
// (Actor)

class UClass* AShowSocialImportAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowSocialImportAction_C");

	return Clss;
}


// ShowSocialImportAction_C ShowSocialImportAction.Default__ShowSocialImportAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShowSocialImportAction_C* AShowSocialImportAction_C::GetDefaultObj()
{
	static class AShowSocialImportAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShowSocialImportAction_C*>(AShowSocialImportAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.HandleSocialImportClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShowSocialImportAction_C::HandleSocialImportClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowSocialImportAction_C", "HandleSocialImportClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowSocialImportAction.ShowSocialImportAction_C.ShowSocialImport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSocialImportPanel*      CallFunc_ShowSocialImport_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShowSocialImportAction_C::ShowSocialImport(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInViewport_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UFortSocialImportPanel* CallFunc_ShowSocialImport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowSocialImportAction_C", "ShowSocialImport");

	Params::AShowSocialImportAction_C_ShowSocialImport_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ShowSocialImport_ReturnValue = CallFunc_ShowSocialImport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowSocialImportAction.ShowSocialImportAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShowSocialImportAction_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowSocialImportAction_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowSocialImportAction.ShowSocialImportAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AShowSocialImportAction_C::Execute(struct FFortScriptedActionParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowSocialImportAction_C", "Execute");

	Params::AShowSocialImportAction_C_Execute_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowSocialImportAction.ShowSocialImportAction_C.ExecuteUbergraph_ShowSocialImportAction
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingLogout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShowSocialImportAction_C::ExecuteUbergraph_ShowSocialImportAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowSocialImportAction_C", "ExecuteUbergraph_ShowSocialImportAction");

	Params::AShowSocialImportAction_C_ExecuteUbergraph_ShowSocialImportAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


