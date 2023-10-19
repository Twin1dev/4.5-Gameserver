#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xF20 - 0xF0C)
// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C
class AB_RocketLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_57CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              RearMuzzle;                                        // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_RocketLauncher_Generic_Athena_C* GetDefaultObj();

	void UserConstructionScript();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int32 EntryPoint, bool K2Node_Event_Persistent_Fire);
};

}


