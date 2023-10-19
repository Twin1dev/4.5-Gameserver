#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHitPointBar.AthenaHitPointBar_C
// (None)

class UClass* UAthenaHitPointBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHitPointBar_C");

	return Clss;
}


// AthenaHitPointBar_C AthenaHitPointBar.Default__AthenaHitPointBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHitPointBar_C* UAthenaHitPointBar_C::GetDefaultObj()
{
	static class UAthenaHitPointBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHitPointBar_C*>(UAthenaHitPointBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseLargeSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              TallHeight                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NormalHeight                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHitPointBar_C::SetSize(bool UseLargeSize, float TallHeight, float NormalHeight, bool Temp_bool_Variable, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "SetSize");

	Params::UAthenaHitPointBar_C_SetSize_Params Parms{};

	Parms.UseLargeSize = UseLargeSize;
	Parms.TallHeight = TallHeight;
	Parms.NormalHeight = NormalHeight;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDBNO                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHitPointBar_C::UpdateDBNOState(bool bIsDBNO, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "UpdateDBNOState");

	Params::UAthenaHitPointBar_C_UpdateDBNOState_Params Parms{};

	Parms.bIsDBNO = bIsDBNO;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHitPointBar_C::UpdateHealthType(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDBNO_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "UpdateHealthType");

	Params::UAthenaHitPointBar_C_UpdateHealthType_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetLastValuePercentage_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHitPointBar_C::Update_Delta_Bar(float CallFunc_GetLastValuePercentage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "Update Delta Bar");

	Params::UAthenaHitPointBar_C_Update_Delta_Bar_Params Parms{};

	Parms.CallFunc_GetLastValuePercentage_ReturnValue = CallFunc_GetLastValuePercentage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHealthBarType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthBarType          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthBarType          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthBarType          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable6                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable7                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable8                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthBarType          Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable9                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable10                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable11                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISlateTextureAtlasInterface>Temp_interface_Variable                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHealthBarType          Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISlateTextureAtlasInterface>K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select5_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHitPointBar_C::Initialize_Bar(enum class EHealthBarType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EHealthBarType Temp_byte_Variable1, const struct FLinearColor& Temp_struct_Variable3, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& Temp_struct_Variable5, enum class EHealthBarType Temp_byte_Variable2, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, enum class EHealthBarType Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable6, const struct FLinearColor& Temp_struct_Variable7, const struct FLinearColor& Temp_struct_Variable8, enum class EHealthBarType Temp_byte_Variable4, const struct FLinearColor& Temp_struct_Variable9, const struct FLinearColor& Temp_struct_Variable10, const struct FLinearColor& Temp_struct_Variable11, TScriptInterface<class ISlateTextureAtlasInterface> Temp_interface_Variable, enum class EHealthBarType Temp_byte_Variable5, TScriptInterface<class ISlateTextureAtlasInterface> K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UClass* K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "Initialize Bar");

	Params::UAthenaHitPointBar_C_Initialize_Bar_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.Temp_struct_Variable8 = Temp_struct_Variable8;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_struct_Variable9 = Temp_struct_Variable9;
	Parms.Temp_struct_Variable10 = Temp_struct_Variable10;
	Parms.Temp_struct_Variable11 = Temp_struct_Variable11;
	Parms.Temp_interface_Variable = Temp_interface_Variable;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurrentValuePercentage_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHitPointBar_C::Update_Fill_Bar(float CallFunc_GetCurrentValuePercentage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "Update Fill Bar");

	Params::UAthenaHitPointBar_C_Update_Fill_Bar_Params Parms{};

	Parms.CallFunc_GetCurrentValuePercentage_ReturnValue = CallFunc_GetCurrentValuePercentage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UAthenaHitPointBar_C::UpdateCurrentValue(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "UpdateCurrentValue");

	Params::UAthenaHitPointBar_C_UpdateCurrentValue_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UAthenaHitPointBar_C::UpdateMaxValue(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "UpdateMaxValue");

	Params::UAthenaHitPointBar_C_UpdateMaxValue_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHitPointBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "PreConstruct");

	Params::UAthenaHitPointBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHitPointBar_C::OnMaxValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "OnMaxValueChanged");

	Params::UAthenaHitPointBar_C_OnMaxValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHitPointModificationReasonReason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHitPointBar_C::OnValueChangedWithReason(float Value, enum class EFortHitPointModificationReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "OnValueChangedWithReason");

	Params::UAthenaHitPointBar_C_OnValueChangedWithReason_Params Parms{};

	Parms.Value = Value;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsDBNO                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHitPointBar_C::OnDBNOStateChanged(bool IsDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "OnDBNOStateChanged");

	Params::UAthenaHitPointBar_C_OnDBNOStateChanged_Params Parms{};

	Parms.IsDBNO = IsDBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDeltaChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaHitPointBar_C::OnDeltaChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "OnDeltaChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Value1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHitPointModificationReasonK2Node_Event_Reason                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDBNO                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHitPointBar_C::ExecuteUbergraph_AthenaHitPointBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_Event_Value1, float K2Node_Event_Value, enum class EFortHitPointModificationReason K2Node_Event_Reason, bool K2Node_Event_IsDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHitPointBar_C", "ExecuteUbergraph_AthenaHitPointBar");

	Params::UAthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Value1 = K2Node_Event_Value1;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Reason = K2Node_Event_Reason;
	Parms.K2Node_Event_IsDBNO = K2Node_Event_IsDBNO;

	UObject::ProcessEvent(Func, &Parms);

}

}


