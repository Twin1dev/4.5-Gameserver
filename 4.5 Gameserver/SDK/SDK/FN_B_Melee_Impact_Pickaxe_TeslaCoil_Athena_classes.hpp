#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xBF0 - 0xBE0)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C
class AB_Melee_Impact_Pickaxe_TeslaCoil_Athena_C : public AB_Melee_Impact_Generic_C
{
public:
	class UParticleSystemComponent*              FX_Coil;                                           // 0xBE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_Head;                                           // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Melee_Impact_Pickaxe_TeslaCoil_Athena_C* GetDefaultObj();

	void UserConstructionScript();
};

}


