#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayedBeforeSelect.PlayedBeforeSelect_C
// (None)

class UClass* UPlayedBeforeSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayedBeforeSelect_C");

	return Clss;
}


// PlayedBeforeSelect_C PlayedBeforeSelect.Default__PlayedBeforeSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayedBeforeSelect_C* UPlayedBeforeSelect_C::GetDefaultObj()
{
	static class UPlayedBeforeSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayedBeforeSelect_C*>(UPlayedBeforeSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayedBeforeSelect_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayedBeforeSelect_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayedBeforeSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayedBeforeSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInviteUIDisabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayedBeforeSelect_C::ExecuteUbergraph_PlayedBeforeSelect(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsInviteUIDisabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayedBeforeSelect_C", "ExecuteUbergraph_PlayedBeforeSelect");

	Params::UPlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsInviteUIDisabled_ReturnValue = CallFunc_IsInviteUIDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


