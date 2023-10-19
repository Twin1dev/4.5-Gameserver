#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
// (None)

class UClass* IScoreBadgeProviderMission_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoreBadgeProviderMission_C");

	return Clss;
}


// ScoreBadgeProviderMission_C ScoreBadgeProviderMission.Default__ScoreBadgeProviderMission_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IScoreBadgeProviderMission_C* IScoreBadgeProviderMission_C::GetDefaultObj()
{
	static class IScoreBadgeProviderMission_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IScoreBadgeProviderMission_C*>(IScoreBadgeProviderMission_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStatCategory           ScoreCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IScoreBadgeProviderMission_C::GetTotalScore(enum class EStatCategory ScoreCategory, int32* Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBadgeProviderMission_C", "GetTotalScore");

	Params::IScoreBadgeProviderMission_C_GetTotalScore_Params Parms{};

	Parms.ScoreCategory = ScoreCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Score != nullptr)
		*Score = Parms.Score;

}


// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStatCategory           ScoreCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCollectionMissionBadgeDisplayInfo>BadgeInfos                                                       (Parm, OutParm, ZeroConstructor)

void IScoreBadgeProviderMission_C::GetScoreBadgeInfos(enum class EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBadgeProviderMission_C", "GetScoreBadgeInfos");

	Params::IScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params Parms{};

	Parms.ScoreCategory = ScoreCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (BadgeInfos != nullptr)
		*BadgeInfos = std::move(Parms.BadgeInfos);

}

}


