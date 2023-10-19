#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C
// (None)

class UClass* ULocalPlayerHitPointInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalPlayerHitPointInfo_C");

	return Clss;
}


// LocalPlayerHitPointInfo_C LocalPlayerHitPointInfo.Default__LocalPlayerHitPointInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULocalPlayerHitPointInfo_C* ULocalPlayerHitPointInfo_C::GetDefaultObj()
{
	static class ULocalPlayerHitPointInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalPlayerHitPointInfo_C*>(ULocalPlayerHitPointInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULocalPlayerHitPointInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalPlayerHitPointInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C.ExecuteUbergraph_LocalPlayerHitPointInfo
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalPlayerHitPointInfo_C::ExecuteUbergraph_LocalPlayerHitPointInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalPlayerHitPointInfo_C", "ExecuteUbergraph_LocalPlayerHitPointInfo");

	Params::ULocalPlayerHitPointInfo_C_ExecuteUbergraph_LocalPlayerHitPointInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


