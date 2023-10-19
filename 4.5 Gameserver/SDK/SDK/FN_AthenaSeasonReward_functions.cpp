#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSeasonReward.AthenaSeasonReward_C
// (None)

class UClass* UAthenaSeasonReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSeasonReward_C");

	return Clss;
}


// AthenaSeasonReward_C AthenaSeasonReward.Default__AthenaSeasonReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSeasonReward_C* UAthenaSeasonReward_C::GetDefaultObj()
{
	static class UAthenaSeasonReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSeasonReward_C*>(UAthenaSeasonReward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaCharacterItemDefinition*K2Node_DynamicCast_AsAthena_Character_Item_Definition            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItem*>           K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)

void UAthenaSeasonReward_C::ViewInVault(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<class UFortItem*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "ViewInVault");

	Params::UAthenaSeasonReward_C_ViewInVault_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAthena_Character_Item_Definition = K2Node_DynamicCast_AsAthena_Character_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SecondaryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::SetSecondaryItem(class UFortItem* SecondaryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "SetSecondaryItem");

	Params::UAthenaSeasonReward_C_SetSecondaryItem_Params Parms{};

	Parms.SecondaryItem = SecondaryItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::EnableRarityFlare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "EnableRarityFlare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldViewOnHover                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::SetViewOnHover(bool ShouldViewOnHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "SetViewOnHover");

	Params::UAthenaSeasonReward_C_SetViewOnHover_Params Parms{};

	Parms.ShouldViewOnHover = ShouldViewOnHover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Claimed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LevelAchieved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::SetState(bool Claimed, bool Locked, bool LevelAchieved, float Temp_float_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select1_Default, float Temp_float_Variable1, bool Temp_bool_Variable2, float K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "SetState");

	Params::UAthenaSeasonReward_C_SetState_Params Parms{};

	Parms.Claimed = Claimed;
	Parms.Locked = Locked;
	Parms.LevelAchieved = LevelAchieved;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToRepresent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Claimed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LevelAchieved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       ItemCardSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::Setup(class UFortItem* ItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, enum class EFortItemCardSize ItemCardSize, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "Setup");

	Params::UAthenaSeasonReward_C_Setup_Params Parms{};

	Parms.ItemToRepresent = ItemToRepresent;
	Parms.Claimed = Claimed;
	Parms.Locked = Locked;
	Parms.LevelAchieved = LevelAchieved;
	Parms.ItemCardSize = ItemCardSize;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "PlayIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::ViewItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "ViewItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::ExecuteUbergraph_AthenaSeasonReward(int32 EntryPoint, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSeasonReward_C", "ExecuteUbergraph_AthenaSeasonReward");

	Params::UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


