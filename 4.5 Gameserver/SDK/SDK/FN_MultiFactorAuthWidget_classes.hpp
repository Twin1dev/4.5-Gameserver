#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x360 - 0x350)
// WidgetBlueprintGeneratedClass MultiFactorAuthWidget.MultiFactorAuthWidget_C
class UMultiFactorAuthWidget_C : public UFortMultiFactorAuthWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextPromptText;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMultiFactorAuthWidget_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_MultiFactorAuthWidget(int32 EntryPoint);
};

}


