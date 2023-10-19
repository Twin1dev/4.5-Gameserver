#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_TeamInfo.HUD_TeamInfo_C
// (None)

class UClass* UHUD_TeamInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_TeamInfo_C");

	return Clss;
}


// HUD_TeamInfo_C HUD_TeamInfo.Default__HUD_TeamInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_TeamInfo_C* UHUD_TeamInfo_C::GetDefaultObj()
{
	static class UHUD_TeamInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_TeamInfo_C*>(UHUD_TeamInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_TeamInfo.HUD_TeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_TeamInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_TeamInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_TeamInfo.HUD_TeamInfo_C.ExecuteUbergraph_HUD_TeamInfo
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_TeamInfo_C::ExecuteUbergraph_HUD_TeamInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_TeamInfo_C", "ExecuteUbergraph_HUD_TeamInfo");

	Params::UHUD_TeamInfo_C_ExecuteUbergraph_HUD_TeamInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


