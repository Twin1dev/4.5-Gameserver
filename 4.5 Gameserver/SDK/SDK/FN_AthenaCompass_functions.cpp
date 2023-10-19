#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCompass.AthenaCompass_C
// (None)

class UClass* UAthenaCompass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCompass_C");

	return Clss;
}


// AthenaCompass_C AthenaCompass.Default__AthenaCompass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCompass_C* UAthenaCompass_C::GetDefaultObj()
{
	static class UAthenaCompass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCompass_C*>(UAthenaCompass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaCompass.AthenaCompass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCompass_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCompass_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompass_C::ExecuteUbergraph_AthenaCompass(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCompass_C", "ExecuteUbergraph_AthenaCompass");

	Params::UAthenaCompass_C_ExecuteUbergraph_AthenaCompass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


