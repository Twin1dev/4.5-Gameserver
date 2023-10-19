#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Solid-Square-CollectionBook.ButtonStyle-Solid-Square-CollectionBook_C
// (None)

class UClass* UButtonStyleMinusSolidMinusSquareMinusCollectionBook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Solid-Square-CollectionBook_C");

	return Clss;
}


// ButtonStyle-Solid-Square-CollectionBook_C ButtonStyle-Solid-Square-CollectionBook.Default__ButtonStyle-Solid-Square-CollectionBook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSolidMinusSquareMinusCollectionBook_C* UButtonStyleMinusSolidMinusSquareMinusCollectionBook_C::GetDefaultObj()
{
	static class UButtonStyleMinusSolidMinusSquareMinusCollectionBook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSolidMinusSquareMinusCollectionBook_C*>(UButtonStyleMinusSolidMinusSquareMinusCollectionBook_C::StaticClass()->DefaultObject);

	return Default;
}

}


