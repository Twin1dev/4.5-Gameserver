#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C
class IMissionObjectiveContentWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionObjectiveContentWidgetInterface_C* GetDefaultObj();

	void GetHeightEstimate(float* Height);
	void Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD);
};

}


