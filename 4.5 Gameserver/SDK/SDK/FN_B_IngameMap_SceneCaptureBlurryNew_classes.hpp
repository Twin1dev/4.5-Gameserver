#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x348 - 0x340)
// BlueprintGeneratedClass B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C
class AB_IngameMap_SceneCaptureBlurryNew_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_IngameMap_SceneCaptureBlurryNew_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int32 EntryPoint);
};

}


