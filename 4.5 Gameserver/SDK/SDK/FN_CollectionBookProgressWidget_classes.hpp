#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x288 - 0x270)
// WidgetBlueprintGeneratedClass CollectionBookProgressWidget.CollectionBookProgressWidget_C
class UCollectionBookProgressWidget_C : public UFortCollectionBookProgressWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(Transient, DuplicateTransient)
	class UBP_FortMaterialProgressBar_C*         BP_FortMaterialProgressBar;                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCollectionBookProgressWidget_C* GetDefaultObj();

	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void ExecuteUbergraph_CollectionBookProgressWidget(int32 EntryPoint, float K2Node_Event_PreviewCompletionPct, float K2Node_Event_NewCompletionPct);
};

}


