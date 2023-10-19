#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AutorunLockZone.AutorunLockZone_C
// (None)

class UClass* UAutorunLockZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutorunLockZone_C");

	return Clss;
}


// AutorunLockZone_C AutorunLockZone.Default__AutorunLockZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAutorunLockZone_C* UAutorunLockZone_C::GetDefaultObj()
{
	static class UAutorunLockZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutorunLockZone_C*>(UAutorunLockZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AutorunLockZone.AutorunLockZone_C.OnInZoneChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsInZone                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAutorunLockZone_C::OnInZoneChanged(bool bNewIsInZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutorunLockZone_C", "OnInZoneChanged");

	Params::UAutorunLockZone_C_OnInZoneChanged_Params Parms{};

	Parms.bNewIsInZone = bNewIsInZone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutorunLockZone.AutorunLockZone_C.ExecuteUbergraph_AutorunLockZone
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewIsInZone                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAutorunLockZone_C::ExecuteUbergraph_AutorunLockZone(int32 EntryPoint, bool K2Node_Event_bNewIsInZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AutorunLockZone_C", "ExecuteUbergraph_AutorunLockZone");

	Params::UAutorunLockZone_C_ExecuteUbergraph_AutorunLockZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bNewIsInZone = K2Node_Event_bNewIsInZone;

	UObject::ProcessEvent(Func, &Parms);

}

}


