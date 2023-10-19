#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemDragIcon.ItemDragIcon_C
// (None)

class UClass* UItemDragIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDragIcon_C");

	return Clss;
}


// ItemDragIcon_C ItemDragIcon.Default__ItemDragIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemDragIcon_C* UItemDragIcon_C::GetDefaultObj()
{
	static class UItemDragIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDragIcon_C*>(UItemDragIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemDragIcon.ItemDragIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDragIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDragIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemDragIcon.ItemDragIcon_C.ExecuteUbergraph_ItemDragIcon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDragIcon_C::ExecuteUbergraph_ItemDragIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDragIcon_C", "ExecuteUbergraph_ItemDragIcon");

	Params::UItemDragIcon_C_ExecuteUbergraph_ItemDragIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


