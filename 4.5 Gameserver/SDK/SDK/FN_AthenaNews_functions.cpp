#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C
// (None)

class UClass* UAthenaNews_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNews_C");

	return Clss;
}


// AthenaNews_C AthenaNews.Default__AthenaNews_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaNews_C* UAthenaNews_C::GetDefaultObj()
{
	static class UAthenaNews_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNews_C*>(UAthenaNews_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaNews.AthenaNews_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "ExecuteUbergraph_AthenaNews");

	Params::UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


