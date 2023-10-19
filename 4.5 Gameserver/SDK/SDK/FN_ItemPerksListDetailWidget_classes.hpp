#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x269 - 0x258)
// WidgetBlueprintGeneratedClass ItemPerksListDetailWidget.ItemPerksListDetailWidget_C
class UItemPerksListDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UPerksList_C*                          PerksList;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowActiveAbilitiesOnly;                           // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UItemPerksListDetailWidget_C* GetDefaultObj();

	void SetState(enum class EFortPerksWidgetState InState, class UFortHero* InEvolutionOption);
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemPerksListDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess);
};

}


