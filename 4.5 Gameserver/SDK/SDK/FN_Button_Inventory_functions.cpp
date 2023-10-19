#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Button_Inventory.Button_Inventory_C
// (None)

class UClass* UButton_Inventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button_Inventory_C");

	return Clss;
}


// Button_Inventory_C Button_Inventory.Default__Button_Inventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButton_Inventory_C* UButton_Inventory_C::GetDefaultObj()
{
	static class UButton_Inventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton_Inventory_C*>(UButton_Inventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Button_Inventory.Button_Inventory_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_Inventory_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_Inventory_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Button_Inventory.Button_Inventory_C.ExecuteUbergraph_Button_Inventory
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_Inventory_C::ExecuteUbergraph_Button_Inventory(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_Inventory_C", "ExecuteUbergraph_Button_Inventory");

	Params::UButton_Inventory_C_ExecuteUbergraph_Button_Inventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


