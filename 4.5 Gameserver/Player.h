#pragma once

void ServerExecuteInventoryItemHook(AFortPlayerController* PlayerController, FGuid ItemGuid)
{
	auto Pawn = (AFortPlayerPawnAthena*)(PlayerController->Pawn);

	auto ItemDef = GetItemDefFromGuid(PlayerController, ItemGuid);

	if (!ItemDef)
		return;

	Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemDef, ItemGuid);
}

void (*ServerLoadingScreenDropped)(UObject* Context, FFrame* Stack, void* Ret);
void ServerLoadingScreenDroppedHook(UObject* Context, FFrame* Stack, void* Ret)
{
	static void* (*ApplyCharacterCustomization)(AFortPlayerState * a1, AFortPawn * a3) = decltype(ApplyCharacterCustomization)(BaseAddress() + 0xfc8da0);

	auto PlayerController = (AFortPlayerController*)Context;

	auto PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
	auto Pawn = (AFortPlayerPawn*)PlayerController->Pawn;

	ApplyCharacterCustomization(PlayerState, Pawn);

	PlayerController->ForceNetUpdate();
	PlayerState->ForceNetUpdate();
	Pawn->ForceNetUpdate();

	return ServerLoadingScreenDropped(Context, Stack, Ret);
}

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/GameFramework/APlayerController/ServerAcknowledgePossession/
void ServerAcknowlegePossessionHook(APlayerController* Controller, APawn* Pawn)
{
	Controller->AcknowledgedPawn = Pawn;
}

