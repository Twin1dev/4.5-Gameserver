#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C
// (None)

class UClass* UNodeBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NodeBackground_C");

	return Clss;
}


// NodeBackground_C NodeBackground.Default__NodeBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNodeBackground_C* UNodeBackground_C::GetDefaultObj()
{
	static class UNodeBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNodeBackground_C*>(UNodeBackground_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NodeBackground.NodeBackground_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESkillTreeGroups        Groups                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreeGroups        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNodeBackground_C::SetBackgroundColor(enum class ESkillTreeGroups Groups, enum class ESkillTreeGroups Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NodeBackground_C", "SetBackgroundColor");

	Params::UNodeBackground_C_SetBackgroundColor_Params Parms{};

	Parms.Groups = Groups;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NodeBackground.NodeBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNodeBackground_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NodeBackground_C", "PreConstruct");

	Params::UNodeBackground_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NodeBackground.NodeBackground_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNodeBackground_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NodeBackground_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NodeBackground.NodeBackground_C.ExecuteUbergraph_NodeBackground
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNodeBackground_C::ExecuteUbergraph_NodeBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NodeBackground_C", "ExecuteUbergraph_NodeBackground");

	Params::UNodeBackground_C_ExecuteUbergraph_NodeBackground_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


