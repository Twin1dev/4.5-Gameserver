#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x268 - 0x258)
// WidgetBlueprintGeneratedClass AthenaGamePhaseWidget.AthenaGamePhaseWidget_C
class UAthenaGamePhaseWidget_C : public UAthenaGamePhaseWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaGamePhaseWidget_C* GetDefaultObj();

	void OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void ExecuteUbergraph_AthenaGamePhaseWidget(int32 EntryPoint, enum class EAthenaGamePhaseStep K2Node_Event_GamePhaseStep, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, class UMaterialInterface* Temp_object_Variable10, class UMaterialInterface* Temp_object_Variable11, class UMaterialInterface* Temp_object_Variable12, class UMaterialInterface* K2Node_Select_Default);
};

}


