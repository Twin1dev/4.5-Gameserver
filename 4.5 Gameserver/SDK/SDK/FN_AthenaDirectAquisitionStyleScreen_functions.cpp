#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
// (None)

class UClass* UAthenaDirectAquisitionStyleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAquisitionStyleScreen_C");

	return Clss;
}


// AthenaDirectAquisitionStyleScreen_C AthenaDirectAquisitionStyleScreen.Default__AthenaDirectAquisitionStyleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAquisitionStyleScreen_C* UAthenaDirectAquisitionStyleScreen_C::GetDefaultObj()
{
	static class UAthenaDirectAquisitionStyleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAquisitionStyleScreen_C*>(UAthenaDirectAquisitionStyleScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "HandleBack");

	Params::UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAquisitionStyleScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAquisitionStyleScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAquisitionStyleScreen_C::OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "OnOfferSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdatePreviewVariants
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                VariantChannel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                VariantTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::UpdatePreviewVariants(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "UpdatePreviewVariants");

	Params::UAthenaDirectAquisitionStyleScreen_C_UpdatePreviewVariants_Params Parms{};

	Parms.VariantChannel = VariantChannel;
	Parms.VariantTag = VariantTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCosmeticItemDefinition*K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaCosmeticItemDefinition*K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_VariantChannel                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_VariantTag                                    (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAquisitionStyleScreen_C::ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_VariantChannel, const struct FGameplayTag& K2Node_CustomEvent_VariantTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAquisitionStyleScreen_C", "ExecuteUbergraph_AthenaDirectAquisitionStyleScreen");

	Params::UAthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition = K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition1 = K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_VariantChannel = K2Node_CustomEvent_VariantChannel;
	Parms.K2Node_CustomEvent_VariantTag = K2Node_CustomEvent_VariantTag;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


