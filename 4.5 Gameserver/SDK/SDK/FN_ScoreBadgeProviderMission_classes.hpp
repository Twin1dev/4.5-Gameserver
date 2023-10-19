#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
class IScoreBadgeProviderMission_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IScoreBadgeProviderMission_C* GetDefaultObj();

	void GetTotalScore(enum class EStatCategory ScoreCategory, int32* Score);
	void GetScoreBadgeInfos(enum class EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos);
};

}


