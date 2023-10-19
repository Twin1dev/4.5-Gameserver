#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollectionHeader-Level.CollectionHeader-Level_C
// (None)

class UClass* UCollectionHeaderMinusLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionHeader-Level_C");

	return Clss;
}


// CollectionHeader-Level_C CollectionHeader-Level.Default__CollectionHeader-Level_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionHeaderMinusLevel_C* UCollectionHeaderMinusLevel_C::GetDefaultObj()
{
	static class UCollectionHeaderMinusLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionHeaderMinusLevel_C*>(UCollectionHeaderMinusLevel_C::StaticClass()->DefaultObject);

	return Default;
}

}


