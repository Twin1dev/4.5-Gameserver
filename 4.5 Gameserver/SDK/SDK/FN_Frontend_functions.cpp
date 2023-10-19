#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend.FrontEnd_C
// (Actor)

class UClass* AFrontEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEnd_C");

	return Clss;
}


// FrontEnd_C Frontend.Default__FrontEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontEnd_C* AFrontEnd_C::GetDefaultObj()
{
	static class AFrontEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontEnd_C*>(AFrontEnd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend.FrontEnd_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void AFrontEnd_C::OnMatchStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEnd_C", "OnMatchStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontEnd_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEnd_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend.FrontEnd_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontEnd_C::EnableTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEnd_C", "EnableTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int32 EntryPoint, bool CallFunc_IsBROnly_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEnd_C", "ExecuteUbergraph_FrontEnd");

	Params::AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


