#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkillTreeGroupBG-H.SkillTreeGroupBG-H_C
// (None)

class UClass* USkillTreeGroupBGMinusH_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkillTreeGroupBG-H_C");

	return Clss;
}


// SkillTreeGroupBG-H_C SkillTreeGroupBG-H.Default__SkillTreeGroupBG-H_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkillTreeGroupBGMinusH_C* USkillTreeGroupBGMinusH_C::GetDefaultObj()
{
	static class USkillTreeGroupBGMinusH_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkillTreeGroupBGMinusH_C*>(USkillTreeGroupBGMinusH_C::StaticClass()->DefaultObject);

	return Default;
}

}


