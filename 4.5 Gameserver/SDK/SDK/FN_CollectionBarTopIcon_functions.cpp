#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBarTopIcon.CollectionBarTopIcon_C
// (None)

class UClass* UCollectionBarTopIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBarTopIcon_C");

	return Clss;
}


// CollectionBarTopIcon_C CollectionBarTopIcon.Default__CollectionBarTopIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBarTopIcon_C* UCollectionBarTopIcon_C::GetDefaultObj()
{
	static class UCollectionBarTopIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBarTopIcon_C*>(UCollectionBarTopIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBarTopIcon.CollectionBarTopIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBarTopIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBarTopIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBarTopIcon.CollectionBarTopIcon_C.ExecuteUbergraph_CollectionBarTopIcon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBarTopIcon_C::ExecuteUbergraph_CollectionBarTopIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBarTopIcon_C", "ExecuteUbergraph_CollectionBarTopIcon");

	Params::UCollectionBarTopIcon_C_ExecuteUbergraph_CollectionBarTopIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


