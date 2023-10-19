#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkillTreeGroupBG-Vert.SkillTreeGroupBG-Vert_C
// (None)

class UClass* USkillTreeGroupBGMinusVert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkillTreeGroupBG-Vert_C");

	return Clss;
}


// SkillTreeGroupBG-Vert_C SkillTreeGroupBG-Vert.Default__SkillTreeGroupBG-Vert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkillTreeGroupBGMinusVert_C* USkillTreeGroupBGMinusVert_C::GetDefaultObj()
{
	static class USkillTreeGroupBGMinusVert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkillTreeGroupBGMinusVert_C*>(USkillTreeGroupBGMinusVert_C::StaticClass()->DefaultObject);

	return Default;
}

}


