#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x248 - 0x228)
// WidgetBlueprintGeneratedClass CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C
class UCollectionBookPageCompletionRewardWidget_C : public UFortCollectionBookPageCompletionRewardWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UImage*                                ArrowImage;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckImage;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 RewardStatusSwitcher;                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCollectionBookPageCompletionRewardWidget_C* GetDefaultObj();

	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	void ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus Temp_byte_Variable, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, class UWidget* K2Node_Select_Default);
};

}


