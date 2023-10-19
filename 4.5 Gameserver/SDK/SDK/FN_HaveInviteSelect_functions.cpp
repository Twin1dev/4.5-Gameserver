#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HaveInviteSelect.HaveInviteSelect_C
// (None)

class UClass* UHaveInviteSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HaveInviteSelect_C");

	return Clss;
}


// HaveInviteSelect_C HaveInviteSelect.Default__HaveInviteSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHaveInviteSelect_C* UHaveInviteSelect_C::GetDefaultObj()
{
	static class UHaveInviteSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHaveInviteSelect_C*>(UHaveInviteSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HaveInviteSelect.HaveInviteSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHaveInviteSelect_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HaveInviteSelect_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HaveInviteSelect.HaveInviteSelect_C.ExecuteUbergraph_HaveInviteSelect
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHaveInviteSelect_C::ExecuteUbergraph_HaveInviteSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HaveInviteSelect_C", "ExecuteUbergraph_HaveInviteSelect");

	Params::UHaveInviteSelect_C_ExecuteUbergraph_HaveInviteSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


