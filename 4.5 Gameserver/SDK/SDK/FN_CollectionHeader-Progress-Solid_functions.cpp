#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollectionHeader-Progress-Solid.CollectionHeader-Progress-Solid_C
// (None)

class UClass* UCollectionHeaderMinusProgressMinusSolid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionHeader-Progress-Solid_C");

	return Clss;
}


// CollectionHeader-Progress-Solid_C CollectionHeader-Progress-Solid.Default__CollectionHeader-Progress-Solid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionHeaderMinusProgressMinusSolid_C* UCollectionHeaderMinusProgressMinusSolid_C::GetDefaultObj()
{
	static class UCollectionHeaderMinusProgressMinusSolid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionHeaderMinusProgressMinusSolid_C*>(UCollectionHeaderMinusProgressMinusSolid_C::StaticClass()->DefaultObject);

	return Default;
}

}


