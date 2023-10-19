#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
// (None)

class UClass* UCollectionBookSlotView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookSlotView_C");

	return Clss;
}


// CollectionBookSlotView_C CollectionBookSlotView.Default__CollectionBookSlotView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookSlotView_C* UCollectionBookSlotView_C::GetDefaultObj()
{
	static class UCollectionBookSlotView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookSlotView_C*>(UCollectionBookSlotView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookSlotView.CollectionBookSlotView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookSlotView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSlotView_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookSlotView.CollectionBookSlotView_C.ExecuteUbergraph_CollectionBookSlotView
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSlotView_C::ExecuteUbergraph_CollectionBookSlotView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSlotView_C", "ExecuteUbergraph_CollectionBookSlotView");

	Params::UCollectionBookSlotView_C_ExecuteUbergraph_CollectionBookSlotView_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


