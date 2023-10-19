#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FriendCodeConsole.FriendCodeConsole_C
// (None)

class UClass* UFriendCodeConsole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendCodeConsole_C");

	return Clss;
}


// FriendCodeConsole_C FriendCodeConsole.Default__FriendCodeConsole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendCodeConsole_C* UFriendCodeConsole_C::GetDefaultObj()
{
	static class UFriendCodeConsole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendCodeConsole_C*>(UFriendCodeConsole_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FriendCodeConsole.FriendCodeConsole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodeConsole_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeConsole_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bMessageSent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendCodeConsole_C::OnSendFriendCodeMessageComplete(bool bMessageSent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeConsole_C", "OnSendFriendCodeMessageComplete");

	Params::UFriendCodeConsole_C_OnSendFriendCodeMessageComplete_Params Parms{};

	Parms.bMessageSent = bMessageSent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeConsole.FriendCodeConsole_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodeConsole_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeConsole_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFriendCodeDescription_ReturnValue                    (None)
// class FText                        CallFunc_GetFriendCodeDisplayName_ReturnValue                    (None)
// bool                               K2Node_CustomEvent_bMessageSent                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendCodeConsole_C::ExecuteUbergraph_FriendCodeConsole(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class FText CallFunc_GetFriendCodeDescription_ReturnValue, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, bool K2Node_CustomEvent_bMessageSent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeConsole_C", "ExecuteUbergraph_FriendCodeConsole");

	Params::UFriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetFriendCodeDescription_ReturnValue = CallFunc_GetFriendCodeDescription_ReturnValue;
	Parms.CallFunc_GetFriendCodeDisplayName_ReturnValue = CallFunc_GetFriendCodeDisplayName_ReturnValue;
	Parms.K2Node_CustomEvent_bMessageSent = K2Node_CustomEvent_bMessageSent;

	UObject::ProcessEvent(Func, &Parms);

}

}


