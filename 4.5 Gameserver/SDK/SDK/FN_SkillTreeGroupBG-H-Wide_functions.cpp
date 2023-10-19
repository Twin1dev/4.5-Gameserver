#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkillTreeGroupBG-H-Wide.SkillTreeGroupBG-H-Wide_C
// (None)

class UClass* USkillTreeGroupBGMinusHMinusWide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkillTreeGroupBG-H-Wide_C");

	return Clss;
}


// SkillTreeGroupBG-H-Wide_C SkillTreeGroupBG-H-Wide.Default__SkillTreeGroupBG-H-Wide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkillTreeGroupBGMinusHMinusWide_C* USkillTreeGroupBGMinusHMinusWide_C::GetDefaultObj()
{
	static class USkillTreeGroupBGMinusHMinusWide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkillTreeGroupBGMinusHMinusWide_C*>(USkillTreeGroupBGMinusHMinusWide_C::StaticClass()->DefaultObject);

	return Default;
}

}


