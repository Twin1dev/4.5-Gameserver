#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollectionHeader-PageProgress.CollectionHeader-PageProgress_C
// (None)

class UClass* UCollectionHeaderMinusPageProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionHeader-PageProgress_C");

	return Clss;
}


// CollectionHeader-PageProgress_C CollectionHeader-PageProgress.Default__CollectionHeader-PageProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionHeaderMinusPageProgress_C* UCollectionHeaderMinusPageProgress_C::GetDefaultObj()
{
	static class UCollectionHeaderMinusPageProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionHeaderMinusPageProgress_C*>(UCollectionHeaderMinusPageProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}


