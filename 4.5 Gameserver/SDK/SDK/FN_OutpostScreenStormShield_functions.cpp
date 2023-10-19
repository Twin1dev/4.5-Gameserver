#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OutpostScreenStormShield.OutpostScreenStormShield_C
// (None)

class UClass* UOutpostScreenStormShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OutpostScreenStormShield_C");

	return Clss;
}


// OutpostScreenStormShield_C OutpostScreenStormShield.Default__OutpostScreenStormShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOutpostScreenStormShield_C* UOutpostScreenStormShield_C::GetDefaultObj()
{
	static class UOutpostScreenStormShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOutpostScreenStormShield_C*>(UOutpostScreenStormShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterPermissionsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::CenterPermissionsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "CenterPermissionsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterStormShieldWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::CenterStormShieldWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "CenterStormShieldWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::HandleBack(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "HandleBack");

	Params::UOutpostScreenStormShield_C_HandleBack_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.AddInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UOutpostScreenStormShield_C::AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "AddInputHandlers");

	Params::UOutpostScreenStormShield_C_AddInputHandlers_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.SetCoreBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortOutpostBuilding*        NewCoreBuilding                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenStormShieldContent_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutpostScreenStormShieldPermissions_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOutpostScreenStormShield_C::SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue1, class UOutpostScreenStormShieldContent_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content, bool K2Node_DynamicCast_bSuccess, class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "SetCoreBuilding");

	Params::UOutpostScreenStormShield_C_SetCoreBuilding_Params Parms{};

	Parms.NewCoreBuilding = NewCoreBuilding;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue1 = CallFunc_GetWidgetAtIndex_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature");

	Params::UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.ExecuteUbergraph_OutpostScreenStormShield
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutpostScreenStormShieldPermissions_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutpostScreenStormShieldContent_C*K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOutpostScreenStormShield_C::ExecuteUbergraph_OutpostScreenStormShield(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue1, class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions, bool K2Node_DynamicCast_bSuccess, class UOutpostScreenStormShieldContent_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content, bool K2Node_DynamicCast_bSuccess1, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "ExecuteUbergraph_OutpostScreenStormShield");

	Params::UOutpostScreenStormShield_C_ExecuteUbergraph_OutpostScreenStormShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TabId1 = K2Node_ComponentBoundEvent_TabId1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue1 = CallFunc_GetWidgetAtIndex_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content = K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CloseOutpostScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOutpostScreenStormShield_C::CloseOutpostScreen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OutpostScreenStormShield_C", "CloseOutpostScreen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


