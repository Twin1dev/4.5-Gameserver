#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemManagementTileButtonStyle-MulchModeItemToDetail.ItemManagementTileButtonStyle-MulchModeItemToDetail_C
// (None)

class UClass* UItemManagementTileButtonStyleMinusMulchModeItemToDetail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemManagementTileButtonStyle-MulchModeItemToDetail_C");

	return Clss;
}


// ItemManagementTileButtonStyle-MulchModeItemToDetail_C ItemManagementTileButtonStyle-MulchModeItemToDetail.Default__ItemManagementTileButtonStyle-MulchModeItemToDetail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemManagementTileButtonStyleMinusMulchModeItemToDetail_C* UItemManagementTileButtonStyleMinusMulchModeItemToDetail_C::GetDefaultObj()
{
	static class UItemManagementTileButtonStyleMinusMulchModeItemToDetail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemManagementTileButtonStyleMinusMulchModeItemToDetail_C*>(UItemManagementTileButtonStyleMinusMulchModeItemToDetail_C::StaticClass()->DefaultObject);

	return Default;
}

}


