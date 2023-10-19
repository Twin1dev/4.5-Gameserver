#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C
// (None)

class UClass* UHeroSquadBonusesDetailWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroSquadBonusesDetailWidget_C");

	return Clss;
}


// HeroSquadBonusesDetailWidget_C HeroSquadBonusesDetailWidget.Default__HeroSquadBonusesDetailWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroSquadBonusesDetailWidget_C* UHeroSquadBonusesDetailWidget_C::GetDefaultObj()
{
	static class UHeroSquadBonusesDetailWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroSquadBonusesDetailWidget_C*>(UHeroSquadBonusesDetailWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadBonusesDetailWidget_C::UpdatePerkWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "UpdatePerkWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadBonusesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "HandlePostDifferentItemToDetailSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.ExecuteUbergraph_HeroSquadBonusesDetailWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadBonusesDetailWidget_C::ExecuteUbergraph_HeroSquadBonusesDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "ExecuteUbergraph_HeroSquadBonusesDetailWidget");

	Params::UHeroSquadBonusesDetailWidget_C_ExecuteUbergraph_HeroSquadBonusesDetailWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


