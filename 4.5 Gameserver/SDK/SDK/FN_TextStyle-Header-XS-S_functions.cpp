#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XS-S.TextStyle-Header-XS-S_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXSMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XS-S_C");

	return Clss;
}


// TextStyle-Header-XS-S_C TextStyle-Header-XS-S.Default__TextStyle-Header-XS-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXSMinusS_C* UTextStyleMinusHeaderMinusXSMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXSMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXSMinusS_C*>(UTextStyleMinusHeaderMinusXSMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


