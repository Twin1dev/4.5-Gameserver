#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSessionId.AthenaSessionId_C
// (None)

class UClass* UAthenaSessionId_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSessionId_C");

	return Clss;
}


// AthenaSessionId_C AthenaSessionId.Default__AthenaSessionId_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSessionId_C* UAthenaSessionId_C::GetDefaultObj()
{
	static class UAthenaSessionId_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSessionId_C*>(UAthenaSessionId_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSessionId.AthenaSessionId_C.UpdateSessionId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionId_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UAthenaSessionId_C::UpdateSessionId(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetSessionId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSessionId_C", "UpdateSessionId");

	Params::UAthenaSessionId_C_UpdateSessionId_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSessionId_ReturnValue = CallFunc_GetSessionId_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSessionId.AthenaSessionId_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSessionId_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSessionId_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSessionId.AthenaSessionId_C.ExecuteUbergraph_AthenaSessionId
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSessionId_C::ExecuteUbergraph_AthenaSessionId(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSessionId_C", "ExecuteUbergraph_AthenaSessionId");

	Params::UAthenaSessionId_C_ExecuteUbergraph_AthenaSessionId_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


