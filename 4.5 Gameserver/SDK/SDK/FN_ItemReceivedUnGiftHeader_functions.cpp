#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C
// (None)

class UClass* UItemReceivedUnGiftHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedUnGiftHeader_C");

	return Clss;
}


// ItemReceivedUnGiftHeader_C ItemReceivedUnGiftHeader.Default__ItemReceivedUnGiftHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedUnGiftHeader_C* UItemReceivedUnGiftHeader_C::GetDefaultObj()
{
	static class UItemReceivedUnGiftHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedUnGiftHeader_C*>(UItemReceivedUnGiftHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedUnGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedUnGiftHeader_C", "InitFromGiftBoxItem_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.ExecuteUbergraph_ItemReceivedUnGiftHeader
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedUnGiftHeader_C::ExecuteUbergraph_ItemReceivedUnGiftHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedUnGiftHeader_C", "ExecuteUbergraph_ItemReceivedUnGiftHeader");

	Params::UItemReceivedUnGiftHeader_C_ExecuteUbergraph_ItemReceivedUnGiftHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


