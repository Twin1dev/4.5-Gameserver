#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass ActiveModifiersPanelContent.ActiveModifiersPanelContent_C
class UActiveModifiersPanelContent_C : public UCommonUserWidget
{
public:
	class UImage*                                Image_0;                                           // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionDetailsModifierList_C*         MissionDetailsModifierList;                        // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActiveModifiersPanelContent_C* GetDefaultObj();

	void Init(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers);
};

}


