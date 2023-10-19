#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Carmine_Punch_Impact.GCN_Carmine_Punch_Impact_C
// (None)

class UClass* UGCN_Carmine_Punch_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Carmine_Punch_Impact_C");

	return Clss;
}


// GCN_Carmine_Punch_Impact_C GCN_Carmine_Punch_Impact.Default__GCN_Carmine_Punch_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Carmine_Punch_Impact_C* UGCN_Carmine_Punch_Impact_C::GetDefaultObj()
{
	static class UGCN_Carmine_Punch_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Carmine_Punch_Impact_C*>(UGCN_Carmine_Punch_Impact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Carmine_Punch_Impact.GCN_Carmine_Punch_Impact_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_Carmine_Punch_Impact_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Carmine_Punch_Impact_C", "OnStartParticleSystemSpawned");

	Params::UGCN_Carmine_Punch_Impact_C_OnStartParticleSystemSpawned_Params Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


