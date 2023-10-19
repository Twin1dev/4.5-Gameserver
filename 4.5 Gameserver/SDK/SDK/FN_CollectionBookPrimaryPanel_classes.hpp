#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x3C1 - 0x3B8)
// WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C
class UCollectionBookPrimaryPanel_C : public UFortCollectionBookPrimaryPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(Transient, DuplicateTransient)
	bool                                         CanShowCollectionBookHelp;                         // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCollectionBookPrimaryPanel_C* GetDefaultObj();

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void HandleDisplayInfoBox();
	void ExecuteUbergraph_CollectionBookPrimaryPanel(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UHelpWidget_C* K2Node_DynamicCast_AsHelp_Widget, bool K2Node_DynamicCast_bSuccess);
};

}


