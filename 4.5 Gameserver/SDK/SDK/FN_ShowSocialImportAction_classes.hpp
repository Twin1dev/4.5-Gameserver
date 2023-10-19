#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x39A - 0x388)
// BlueprintGeneratedClass ShowSocialImportAction.ShowSocialImportAction_C
class AShowSocialImportAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bLastStateWasLoginScreen;                          // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESubGame                          NewVar_0;                                          // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AShowSocialImportAction_C* GetDefaultObj();

	void HandleSocialImportClosed();
	void ShowSocialImport(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInViewport_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UFortSocialImportPanel* CallFunc_ShowSocialImport_ReturnValue);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_ShowSocialImportAction(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


