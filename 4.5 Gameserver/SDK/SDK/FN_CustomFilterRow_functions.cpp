#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CustomFilterRow.CustomFilterRow_C
// (None)

class UClass* UCustomFilterRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomFilterRow_C");

	return Clss;
}


// CustomFilterRow_C CustomFilterRow.Default__CustomFilterRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomFilterRow_C* UCustomFilterRow_C::GetDefaultObj()
{
	static class UCustomFilterRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomFilterRow_C*>(UCustomFilterRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomFilterRow.CustomFilterRow_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChecked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomFilterRow_C::SetCheckedState(bool IsChecked, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomFilterRow_C", "SetCheckedState");

	Params::UCustomFilterRow_C_SetCheckedState_Params Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCustomFilterRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomFilterRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomFilterRow.CustomFilterRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomFilterRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomFilterRow_C", "PreConstruct");

	Params::UCustomFilterRow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCustomFilterRow_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomFilterRow_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomFilterRow.CustomFilterRow_C.ExecuteUbergraph_CustomFilterRow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCustomFilterRow_C::ExecuteUbergraph_CustomFilterRow(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomFilterRow_C", "ExecuteUbergraph_CustomFilterRow");

	Params::UCustomFilterRow_C_ExecuteUbergraph_CustomFilterRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.OnCustomFilterToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInventoryCustomFilterFilter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChecked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomFilterRow_C::OnCustomFilterToggled__DelegateSignature(enum class EFortInventoryCustomFilter Filter, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomFilterRow_C", "OnCustomFilterToggled__DelegateSignature");

	Params::UCustomFilterRow_C_OnCustomFilterToggled__DelegateSignature_Params Parms{};

	Parms.Filter = Filter;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);

}

}


