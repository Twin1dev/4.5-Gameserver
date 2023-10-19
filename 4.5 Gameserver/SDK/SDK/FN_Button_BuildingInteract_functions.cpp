#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Button_BuildingInteract.Button_BuildingInteract_C
// (None)

class UClass* UButton_BuildingInteract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button_BuildingInteract_C");

	return Clss;
}


// Button_BuildingInteract_C Button_BuildingInteract.Default__Button_BuildingInteract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButton_BuildingInteract_C* UButton_BuildingInteract_C::GetDefaultObj()
{
	static class UButton_BuildingInteract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton_BuildingInteract_C*>(UButton_BuildingInteract_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Button_BuildingInteract.Button_BuildingInteract_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_BuildingInteract_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_BuildingInteract_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Button_BuildingInteract.Button_BuildingInteract_C.ExecuteUbergraph_Button_BuildingInteract
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_BuildingInteract_C::ExecuteUbergraph_Button_BuildingInteract(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_BuildingInteract_C", "ExecuteUbergraph_Button_BuildingInteract");

	Params::UButton_BuildingInteract_C_ExecuteUbergraph_Button_BuildingInteract_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


