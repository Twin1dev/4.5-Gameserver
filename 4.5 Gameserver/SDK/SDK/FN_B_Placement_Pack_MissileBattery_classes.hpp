#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xBC8 - 0xBB0)
// BlueprintGeneratedClass B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C
class AB_Placement_Pack_MissileBattery_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(Transient, DuplicateTransient)
	float                                        BombHeightOffset;                                  // 0xBB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_AirStrike_C*                       AirStrikeAbility;                                  // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Placement_Pack_MissileBattery_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Placement_Pack_MissileBattery(int32 EntryPoint);
};

}


