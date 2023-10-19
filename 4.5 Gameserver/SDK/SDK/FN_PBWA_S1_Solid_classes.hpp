#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC88 - 0xC60)
// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
class APBWA_S1_Solid_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC60(0x8)(Transient, DuplicateTransient)
	int32                                        GnomeWallChance;                                   // 0xC68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GnomeWallMax;                                      // 0xC6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gnomed;                                            // 0xC70(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceConstant*             GnomeMaterial;                                     // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           GnomeWall;                                         // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APBWA_S1_Solid_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable);
};

}


