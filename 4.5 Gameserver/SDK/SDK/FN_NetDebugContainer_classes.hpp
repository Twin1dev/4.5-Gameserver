#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x250 - 0x238)
// WidgetBlueprintGeneratedClass NetDebugContainer.NetDebugContainer_C
class UNetDebugContainer_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNetDebugUI_C*                         NetDebugUI;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNetDebugContainer_C* GetDefaultObj();

	void OnVisibilitySetEvent(enum class ESlateVisibility InVisibility);
	void ExecuteUbergraph_NetDebugContainer(int32 EntryPoint, enum class ESlateVisibility K2Node_Event_InVisibility, bool K2Node_SwitchEnum_CmpSuccess);
};

}


