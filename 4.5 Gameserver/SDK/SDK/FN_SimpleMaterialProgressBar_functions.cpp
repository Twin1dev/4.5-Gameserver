#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C
// (None)

class UClass* USimpleMaterialProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleMaterialProgressBar_C");

	return Clss;
}


// SimpleMaterialProgressBar_C SimpleMaterialProgressBar.Default__SimpleMaterialProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleMaterialProgressBar_C* USimpleMaterialProgressBar_C::GetDefaultObj()
{
	static class USimpleMaterialProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleMaterialProgressBar_C*>(USimpleMaterialProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetColorB(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetColorB");

	Params::USimpleMaterialProgressBar_C_SetColorB_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetColorA(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetColorA");

	Params::USimpleMaterialProgressBar_C_SetColorA_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetProgress(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetProgress");

	Params::USimpleMaterialProgressBar_C_SetProgress_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleMaterialProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMaterialProgressBar_C", "PreConstruct");

	Params::USimpleMaterialProgressBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.ExecuteUbergraph_SimpleMaterialProgressBar
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleMaterialProgressBar_C::ExecuteUbergraph_SimpleMaterialProgressBar(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMaterialProgressBar_C", "ExecuteUbergraph_SimpleMaterialProgressBar");

	Params::USimpleMaterialProgressBar_C_ExecuteUbergraph_SimpleMaterialProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


