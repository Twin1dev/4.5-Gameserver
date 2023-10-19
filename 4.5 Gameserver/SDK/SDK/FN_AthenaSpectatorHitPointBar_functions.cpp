#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C
// (None)

class UClass* UAthenaSpectatorHitPointBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSpectatorHitPointBar_C");

	return Clss;
}


// AthenaSpectatorHitPointBar_C AthenaSpectatorHitPointBar.Default__AthenaSpectatorHitPointBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSpectatorHitPointBar_C* UAthenaSpectatorHitPointBar_C::GetDefaultObj()
{
	static class UAthenaSpectatorHitPointBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSpectatorHitPointBar_C*>(UAthenaSpectatorHitPointBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateDBNOState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHitPointBar_C::UpdateDBNOState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "UpdateDBNOState");

	Params::UAthenaSpectatorHitPointBar_C_UpdateDBNOState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateBarDelta
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::UpdateBarDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "UpdateBarDelta");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateBarFill
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::UpdateBarFill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "UpdateBarFill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.InitializeBar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorHealthBarType Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorHealthBarType Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorHealthBarType Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable6                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable7                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorHealthBarType Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorHitPointBar_C::InitializeBar(const struct FLinearColor& Temp_struct_Variable, enum class ESpectatorHealthBarType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class ESpectatorHealthBarType Temp_byte_Variable1, const struct FLinearColor& Temp_struct_Variable3, const struct FLinearColor& Temp_struct_Variable4, enum class ESpectatorHealthBarType Temp_byte_Variable2, const struct FLinearColor& Temp_struct_Variable5, const struct FLinearColor& Temp_struct_Variable6, const struct FLinearColor& Temp_struct_Variable7, enum class ESpectatorHealthBarType Temp_byte_Variable3, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "InitializeBar");

	Params::UAthenaSpectatorHitPointBar_C_InitializeBar_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnValueCurrentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::OnValueCurrentChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnValueCurrentChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnValueLastChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::OnValueLastChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnValueLastChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSpectatorHitPointBar_C::OnDBNOChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "OnDBNOChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHitPointBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "PreConstruct");

	Params::UAthenaSpectatorHitPointBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.ExecuteUbergraph_AthenaSpectatorHitPointBar
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorHitPointBar_C::ExecuteUbergraph_AthenaSpectatorHitPointBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorHitPointBar_C", "ExecuteUbergraph_AthenaSpectatorHitPointBar");

	Params::UAthenaSpectatorHitPointBar_C_ExecuteUbergraph_AthenaSpectatorHitPointBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


