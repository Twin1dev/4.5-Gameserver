#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2A8 - 0x210)
// WidgetBlueprintGeneratedClass BottomBarWidget.BottomBarWidget_C
class UBottomBarWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UBorder*                               BorderShell;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           MobileBackground;                                  // 0x220(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBottomBarWidget_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_BottomBarWidget(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue);
};

}


