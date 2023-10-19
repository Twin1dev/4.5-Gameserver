#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button-SkillTree-S.Button-SkillTree-S_C
// (None)

class UClass* UButtonMinusSkillTreeMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button-SkillTree-S_C");

	return Clss;
}


// Button-SkillTree-S_C Button-SkillTree-S.Default__Button-SkillTree-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonMinusSkillTreeMinusS_C* UButtonMinusSkillTreeMinusS_C::GetDefaultObj()
{
	static class UButtonMinusSkillTreeMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonMinusSkillTreeMinusS_C*>(UButtonMinusSkillTreeMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


