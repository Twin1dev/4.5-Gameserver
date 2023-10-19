#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x8D0 - 0x8C0)
// BlueprintGeneratedClass FrontendCamera_Main.FrontendCamera_Main_C
class AFrontendCamera_Main_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)
	class UCameraComponent*                      LoginCamera_0;                                     // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontendCamera_Main_C* GetDefaultObj();

	void UserConstructionScript();
	void OnActivated();
	void ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item);
};

}


