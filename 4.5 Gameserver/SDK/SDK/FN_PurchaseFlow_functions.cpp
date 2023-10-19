#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PurchaseFlow.PurchaseFlowJSBridge
// (None)

class UClass* UPurchaseFlowJSBridge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurchaseFlowJSBridge");

	return Clss;
}


// PurchaseFlowJSBridge PurchaseFlow.Default__PurchaseFlowJSBridge
// (Public, ClassDefaultObject, ArchetypeObject)

class UPurchaseFlowJSBridge* UPurchaseFlowJSBridge::GetDefaultObj()
{
	static class UPurchaseFlowJSBridge* Default = nullptr;

	if (!Default)
		Default = static_cast<UPurchaseFlowJSBridge*>(UPurchaseFlowJSBridge::StaticClass()->DefaultObject);

	return Default;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// class FString                      CloseInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::UPurchaseFlowJSBridge_RequestClose_Params Parms{};

	Parms.CloseInfo = CloseInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam   RECEIPT                                                          (Parm, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseFlowJSBridge", "RECEIPT");

	Params::UPurchaseFlowJSBridge_RECEIPT_Params Parms{};

	Parms.RECEIPT = RECEIPT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


