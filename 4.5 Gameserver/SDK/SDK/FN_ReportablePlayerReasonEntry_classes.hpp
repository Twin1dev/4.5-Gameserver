#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x8B8 - 0x8A0)
// WidgetBlueprintGeneratedClass ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C
class UReportablePlayerReasonEntry_C : public UFeedbackReportPlayerReasonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UReportablePlayerReasonEntry_C* GetDefaultObj();

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
	void ExecuteUbergraph_ReportablePlayerReasonEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bAnimateOnSelect);
};

}


