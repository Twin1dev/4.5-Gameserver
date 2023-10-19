#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-SectionHeader.TextStyle-SectionHeader_C
// (None)

class UClass* UTextStyleMinusSectionHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-SectionHeader_C");

	return Clss;
}


// TextStyle-SectionHeader_C TextStyle-SectionHeader.Default__TextStyle-SectionHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusSectionHeader_C* UTextStyleMinusSectionHeader_C::GetDefaultObj()
{
	static class UTextStyleMinusSectionHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusSectionHeader_C*>(UTextStyleMinusSectionHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


