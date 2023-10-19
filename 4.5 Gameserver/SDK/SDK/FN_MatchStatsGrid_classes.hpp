#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x210 - 0x208)
// WidgetBlueprintGeneratedClass MatchStatsGrid.MatchStatsGrid_C
class UMatchStatsGrid_C : public UUserWidget
{
public:
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x208(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMatchStatsGrid_C* GetDefaultObj();

	void SetStats(class UAthenaMatchStatView* AthenaMatchStats);
};

}


