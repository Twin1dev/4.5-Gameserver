#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemOrWidget.ItemOrWidget_C
// (None)

class UClass* UItemOrWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemOrWidget_C");

	return Clss;
}


// ItemOrWidget_C ItemOrWidget.Default__ItemOrWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemOrWidget_C* UItemOrWidget_C::GetDefaultObj()
{
	static class UItemOrWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemOrWidget_C*>(UItemOrWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemOrWidget.ItemOrWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemOrWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOrWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemOrWidget.ItemOrWidget_C.ExecuteUbergraph_ItemOrWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemOrWidget_C::ExecuteUbergraph_ItemOrWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOrWidget_C", "ExecuteUbergraph_ItemOrWidget");

	Params::UItemOrWidget_C_ExecuteUbergraph_ItemOrWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


