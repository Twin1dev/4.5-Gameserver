#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BasicInteractionWidget.BasicInteractionWidget_C
// (None)

class UClass* UBasicInteractionWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicInteractionWidget_C");

	return Clss;
}


// BasicInteractionWidget_C BasicInteractionWidget.Default__BasicInteractionWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBasicInteractionWidget_C* UBasicInteractionWidget_C::GetDefaultObj()
{
	static class UBasicInteractionWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasicInteractionWidget_C*>(UBasicInteractionWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicInteractionWidget.BasicInteractionWidget_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasicInteractionWidget_C::UpdateDescription(class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicInteractionWidget_C", "UpdateDescription");

	Params::UBasicInteractionWidget_C_UpdateDescription_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicInteractionWidget.BasicInteractionWidget_C.InitBasicInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBasicInteractionWidget_C::InitBasicInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicInteractionWidget_C", "InitBasicInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicInteractionWidget.BasicInteractionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBasicInteractionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicInteractionWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicInteractionWidget.BasicInteractionWidget_C.ExecuteUbergraph_BasicInteractionWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicInteractionWidget_C::ExecuteUbergraph_BasicInteractionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicInteractionWidget_C", "ExecuteUbergraph_BasicInteractionWidget");

	Params::UBasicInteractionWidget_C_ExecuteUbergraph_BasicInteractionWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


