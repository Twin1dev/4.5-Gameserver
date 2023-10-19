#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollectionHeader-Progress.CollectionHeader-Progress_C
// (None)

class UClass* UCollectionHeaderMinusProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionHeader-Progress_C");

	return Clss;
}


// CollectionHeader-Progress_C CollectionHeader-Progress.Default__CollectionHeader-Progress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionHeaderMinusProgress_C* UCollectionHeaderMinusProgress_C::GetDefaultObj()
{
	static class UCollectionHeaderMinusProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionHeaderMinusProgress_C*>(UCollectionHeaderMinusProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}


