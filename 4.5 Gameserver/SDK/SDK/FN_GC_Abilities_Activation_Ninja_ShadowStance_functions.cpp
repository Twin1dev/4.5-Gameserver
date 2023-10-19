#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C
// (Actor)

class UClass* AGC_Abilities_Activation_Ninja_ShadowStance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Abilities_Activation_Ninja_ShadowStance_C");

	return Clss;
}


// GC_Abilities_Activation_Ninja_ShadowStance_C GC_Abilities_Activation_Ninja_ShadowStance.Default__GC_Abilities_Activation_Ninja_ShadowStance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Abilities_Activation_Ninja_ShadowStance_C* AGC_Abilities_Activation_Ninja_ShadowStance_C::GetDefaultObj()
{
	static class AGC_Abilities_Activation_Ninja_ShadowStance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Abilities_Activation_Ninja_ShadowStance_C*>(AGC_Abilities_Activation_Ninja_ShadowStance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    WhileActiveParticleSysComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Abilities_Activation_Ninja_ShadowStance_C", "OnWhileActiveParticleSystemDeactivate");

	Params::AGC_Abilities_Activation_Ninja_ShadowStance_C_OnWhileActiveParticleSystemDeactivate_Params Parms{};

	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Abilities_Activation_Ninja_ShadowStance_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Abilities_Activation_Ninja_ShadowStance_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


