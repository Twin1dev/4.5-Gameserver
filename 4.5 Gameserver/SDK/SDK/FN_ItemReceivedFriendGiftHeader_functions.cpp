#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C
// (None)

class UClass* UItemReceivedFriendGiftHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedFriendGiftHeader_C");

	return Clss;
}


// ItemReceivedFriendGiftHeader_C ItemReceivedFriendGiftHeader.Default__ItemReceivedFriendGiftHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedFriendGiftHeader_C* UItemReceivedFriendGiftHeader_C::GetDefaultObj()
{
	static class UItemReceivedFriendGiftHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedFriendGiftHeader_C*>(UItemReceivedFriendGiftHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedFriendGiftHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "InitFromGiftBoxItem_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_FormatTextUsingParams_ReturnValue                       (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue1                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UItemReceivedFriendGiftHeader_C::ExecuteUbergraph_ItemReceivedFriendGiftHeader(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedFriendGiftHeader_C", "ExecuteUbergraph_ItemReceivedFriendGiftHeader");

	Params::UItemReceivedFriendGiftHeader_C_ExecuteUbergraph_ItemReceivedFriendGiftHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_FormatTextUsingParams_ReturnValue = CallFunc_FormatTextUsingParams_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue1 = CallFunc_Conv_StringToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


