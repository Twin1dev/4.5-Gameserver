#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button-SkillTree-Next-L.Button-SkillTree-Next-L_C
// (None)

class UClass* UButtonMinusSkillTreeMinusNextMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button-SkillTree-Next-L_C");

	return Clss;
}


// Button-SkillTree-Next-L_C Button-SkillTree-Next-L.Default__Button-SkillTree-Next-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonMinusSkillTreeMinusNextMinusL_C* UButtonMinusSkillTreeMinusNextMinusL_C::GetDefaultObj()
{
	static class UButtonMinusSkillTreeMinusNextMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonMinusSkillTreeMinusNextMinusL_C*>(UButtonMinusSkillTreeMinusNextMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


