#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C
// (None)

class UClass* UHomeScreenQuestRewardItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HomeScreenQuestRewardItem_C");

	return Clss;
}


// HomeScreenQuestRewardItem_C HomeScreenQuestRewardItem.Default__HomeScreenQuestRewardItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHomeScreenQuestRewardItem_C* UHomeScreenQuestRewardItem_C::GetDefaultObj()
{
	static class UHomeScreenQuestRewardItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHomeScreenQuestRewardItem_C*>(UHomeScreenQuestRewardItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHomeScreenQuestRewardItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HomeScreenQuestRewardItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.ExecuteUbergraph_HomeScreenQuestRewardItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenQuestRewardItem_C::ExecuteUbergraph_HomeScreenQuestRewardItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HomeScreenQuestRewardItem_C", "ExecuteUbergraph_HomeScreenQuestRewardItem");

	Params::UHomeScreenQuestRewardItem_C_ExecuteUbergraph_HomeScreenQuestRewardItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


