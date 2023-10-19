#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x238 - 0x208)
// WidgetBlueprintGeneratedClass VoteResultNotificationWidget.VoteResultNotificationWidget_C
class UVoteResultNotificationWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UImage*                                VoteResultImage;                                   // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteResultText;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VoteTypeImage;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnToastFinished;                                   // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UVoteResultNotificationWidget_C* GetDefaultObj();

	void SetToast(class UFortUINotification* Toast, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMissionVoteUINotification* K2Node_DynamicCast_AsFort_Mission_Vote_UINotification, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue);
	void Initialize(enum class EFortVoteType VoteType, bool VoteResult, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, enum class EFortVoteType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable3, class UTexture2D* Temp_object_Variable4, bool Temp_bool_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, enum class EFortVoteType Temp_byte_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class UMaterialInterface* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UTexture2D* K2Node_Select2_Default, class FText K2Node_Select3_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select4_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ToastFinished();
	void ExecuteUbergraph_VoteResultNotificationWidget(int32 EntryPoint);
	void OnToastFinished__DelegateSignature();
};

}


