#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C
// (Actor)

class UClass* ABP_Hex_Outpost_Theater3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hex_Outpost_Theater3_C");

	return Clss;
}


// BP_Hex_Outpost_Theater3_C BP_Hex_Outpost_Theater3.Default__BP_Hex_Outpost_Theater3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hex_Outpost_Theater3_C* ABP_Hex_Outpost_Theater3_C::GetDefaultObj()
{
	static class ABP_Hex_Outpost_Theater3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hex_Outpost_Theater3_C*>(ABP_Hex_Outpost_Theater3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_Outpost_Theater3_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Hex_Outpost_Theater3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_Outpost_Theater3_C::ActivateOutpost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "ActivateOutpost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.HandleOnPlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_Hex_Outpost_Theater3_C::HandleOnPlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "HandleOnPlayerInfoChanged");

	Params::ABP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged_Params Parms{};

	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ExecuteUbergraph_BP_Hex_Outpost_Theater3
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UniqueId                                      (ConstParm, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_Outpost_Theater3_C::ExecuteUbergraph_BP_Hex_Outpost_Theater3(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hex_Outpost_Theater3_C", "ExecuteUbergraph_BP_Hex_Outpost_Theater3");

	Params::ABP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UniqueId = K2Node_CustomEvent_UniqueId;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


