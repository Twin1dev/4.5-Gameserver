#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_NPC_Fire.GCN_NPC_Fire_C
// (Actor)

class UClass* AGCN_NPC_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_NPC_Fire_C");

	return Clss;
}


// GCN_NPC_Fire_C GCN_NPC_Fire.Default__GCN_NPC_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_NPC_Fire_C* AGCN_NPC_Fire_C::GetDefaultObj()
{
	static class AGCN_NPC_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_NPC_Fire_C*>(AGCN_NPC_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_NPC_Fire.GCN_NPC_Fire_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCN_NPC_Fire_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_NPC_Fire_C", "OnRemove");

	Params::AGCN_NPC_Fire_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_NPC_Fire.GCN_NPC_Fire_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASmasherPawn_C*              K2Node_DynamicCast_AsSmasher_Pawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCN_NPC_Fire_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsDedicatedServer_ReturnValue, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_NPC_Fire_C", "OnActive");

	Params::AGCN_NPC_Fire_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsSmasher_Pawn = K2Node_DynamicCast_AsSmasher_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_NPC_Fire.GCN_NPC_Fire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_NPC_Fire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_NPC_Fire_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


