#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xF20 - 0xF0C)
// BlueprintGeneratedClass B_Pistol_SixShooter_Athena.B_Pistol_SixShooter_Athena_C
class AB_Pistol_SixShooter_Athena_C : public AB_Pistol_Generic_C
{
public:
	uint8                                        Pad_3EFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Reload_QuickReload;                                // 0xF10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Pistol_SixShooter_Athena_C* GetDefaultObj();

	void UserConstructionScript();
};

}


