#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
// (Actor)

class UClass* AFrontend_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Lobby_C");

	return Clss;
}


// Frontend_Lobby_C Frontend_Lobby.Default__Frontend_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Lobby_C* AFrontend_Lobby_C::GetDefaultObj()
{
	static class AFrontend_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Lobby_C*>(AFrontend_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_Lobby.Frontend_Lobby_C.OnBackgroundChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_C::OnBackgroundChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_C", "OnBackgroundChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLobbyBackgroundLevelName_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void AFrontend_Lobby_C::ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetLobbyBackgroundLevelName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_C", "ExecuteUbergraph_Frontend_Lobby");

	Params::AFrontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue1 = CallFunc_NotEqual_NameName_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetLobbyBackgroundLevelName_ReturnValue = CallFunc_GetLobbyBackgroundLevelName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


