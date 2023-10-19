#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass GCN_Carmine_Jump_Liftoff.GCN_Carmine_Jump_Liftoff_C
class UGCN_Carmine_Jump_Liftoff_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass();
	static class UGCN_Carmine_Jump_Liftoff_C* GetDefaultObj();

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


