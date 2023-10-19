#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftingScreen.GiftingScreen_C
// (None)

class UClass* UGiftingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftingScreen_C");

	return Clss;
}


// GiftingScreen_C GiftingScreen.Default__GiftingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftingScreen_C* UGiftingScreen_C::GetDefaultObj()
{
	static class UGiftingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftingScreen_C*>(UGiftingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHandled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::HandleBackClicked(bool* bIsHandled, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingScreen_C", "HandleBackClicked");

	Params::UGiftingScreen_C_HandleBackClicked_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsHandled != nullptr)
		*bIsHandled = Parms.bIsHandled;

}


// Function GiftingScreen.GiftingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGiftingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GiftingScreen.GiftingScreen_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo*NewOfferInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::OnOfferSet(class UFortDirectAcquisitionOfferInfo* NewOfferInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingScreen_C", "OnOfferSet");

	Params::UGiftingScreen_C_OnOfferSet_Params Parms{};

	Parms.NewOfferInfo = NewOfferInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*K2Node_Event_NewOfferInfo                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::ExecuteUbergraph_GiftingScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortDirectAcquisitionOfferInfo* K2Node_Event_NewOfferInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingScreen_C", "ExecuteUbergraph_GiftingScreen");

	Params::UGiftingScreen_C_ExecuteUbergraph_GiftingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_NewOfferInfo = K2Node_Event_NewOfferInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


