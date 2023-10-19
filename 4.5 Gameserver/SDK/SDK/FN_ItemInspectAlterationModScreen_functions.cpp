#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C
// (None)

class UClass* UItemInspectAlterationModScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectAlterationModScreen_C");

	return Clss;
}


// ItemInspectAlterationModScreen_C ItemInspectAlterationModScreen.Default__ItemInspectAlterationModScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectAlterationModScreen_C* UItemInspectAlterationModScreen_C::GetDefaultObj()
{
	static class UItemInspectAlterationModScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectAlterationModScreen_C*>(UItemInspectAlterationModScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)

void UItemInspectAlterationModScreen_C::UpdateColors(enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdateColors");

	Params::UItemInspectAlterationModScreen_C_UpdateColors_Params Parms{};

	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::SetupTriangles(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupTriangles");

	Params::UItemInspectAlterationModScreen_C_SetupTriangles_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::SetupHeaderColors(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupHeaderColors");

	Params::UItemInspectAlterationModScreen_C_SetupHeaderColors_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::OnAlterationModificationCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnAlterationModificationCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::RefreshItemAndAlterationsBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "RefreshItemAndAlterationsBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::ExecuteUbergraph_ItemInspectAlterationModScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "ExecuteUbergraph_ItemInspectAlterationModScreen");

	Params::UItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


