#pragma once

static bool bRTSM = false;

bool (*ReadyToStartMatch)(AFortGameModeAthena*);

// https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AGameMode/ReadyToStartMatch/ , ALSO WE USE AFORTGAMEMODEATHENA BCUZ ITS RELATED TO AGAMEMODE AND WONT CAUSE ANY ISSUES
bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	// We could have just checked for mapinfo, but its slower.
	TArray<AActor*> WarmupActors;
	GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Free();

	if (WarmupSpots == 0)
	{
		return false;
	}

	// many diff ways to avoid the repeating, but this is what i always use.
	if (!bRTSM)
	{
		bRTSM = true;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

		// goated 4.5
		GetGameState()->CurrentPlaylistData = Playlist;
		GetGameState()->OnRep_CurrentPlaylistData();

		InitHost = decltype(InitHost)(BaseAddress() + 0x39dab0);
		PauseBeaconRequests = decltype(PauseBeaconRequests)(BaseAddress() + 0xe15db0);
		SetWorld = decltype(SetWorld)(BaseAddress() + 0x2298c60);
		InitListen = decltype(InitListen)(BaseAddress() + 0x39de90);

		auto NewBeacon = SpawnActor<AFortOnlineBeaconHost>({});
		// Unsure why, but this was fixed in 4.26, very later
		NewBeacon->ListenPort = 7777 - 1;

		InitHost(NewBeacon);
		PauseBeaconRequests(NewBeacon, false);

		UWorld::GetWorld()->NetDriver = NewBeacon->NetDriver;

		if (UWorld::GetWorld()->NetDriver)
		{
			UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
			UWorld::GetWorld()->NetDriver->NetDriverName = GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			auto URL = FURL();
			URL.Port = 7777;

			GetGameMode()->GameSession->MaxPlayers = 100;

			InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err);
			SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

			UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
			UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

			std::cout << "Listening on Port 7777!\n";
		}
		else {
			// should never happen
			std::cout << "InitHost is Most likely INVALID!\n";
		}

		GetGameMode()->WarmupRequiredPlayerCount = 1;

		GetGameState()->PlayersLeft--;
		GetGameState()->OnRep_PlayersLeft();
		// For calling SpawnDefaultPawnFor
		GetGameMode()->bWorldIsReady = true;


	}

	bool ret = ReadyToStartMatch(GameMode);
	return ret;
}

static void (*HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
// https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AGameModeBase/HandleStartingNewPlayer/
void HandleStartingNewPlayerHook(AFortGameModeAthena* GM, AFortPlayerControllerAthena* NewPlayer)
{
	std::cout << "join\n";

	auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	NewPlayer->bHasServerFinishedLoading = true;
	NewPlayer->OnRep_bHasServerFinishedLoading();

	PlayerState->bHasStartedPlaying = true;
	PlayerState->OnRep_bHasStartedPlaying();

	//for (int i = 0; i < GetGameMode()->StartingItems.Num(); i++)
	//{
	//	auto Item = GetGameMode()->StartingItems[i];

	//	if (!Item.Item)
	//		continue;

	//	GiveItemToPC(NewPlayer, Item.Item, Item.Count);
	//}

	//GiveAbilitySetToASC(PlayerState->AbilitySystemComponent);

	NewPlayer->OverriddenBackpackSize = 5;

	return HandleStartingNewPlayer(GM, NewPlayer);
}

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/Engine/GameFramework/AGameModeBase/SpawnDefaultPawnFor/
APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	std::cout << ("SpawnDefaultPan\n");


	// Dont know why using SpawnDefaultPawnAtTransform Crashed.

	auto PawnClass = StaticFindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

	auto NewPawn = SpawnActor<APawn>(StartSpot->K2_GetActorLocation(), StartSpot->K2_GetActorRotation(), PawnClass);

	auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	GiveAbilitySetToASC(PlayerState->AbilitySystemComponent);

	for (int i = 0; i < ((AFortGameModeAthena*)GameMode)->StartingItems.Num(); i++)
	{
		auto& StartingItem = ((AFortGameModeAthena*)GameMode)->StartingItems[i];

		GiveItemToPC((AFortPlayerController*)NewPlayer, StartingItem.Item, StartingItem.Count);
	}

	static auto DefaultPickaxe = StaticFindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe");

	GiveItemToPC((AFortPlayerController*)NewPlayer, DefaultPickaxe->WeaponDefinition, 1);

	static auto Head = StaticFindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
	static auto Body = StaticFindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");

	PlayerState->CharacterParts[0] = Head;
	PlayerState->CharacterParts[1] = Body;
	PlayerState->OnRep_CharacterParts();

	Update((AFortPlayerController*)NewPlayer);

	return NewPawn;
}


static inline void (*KickPlayer)(AGameSession*, AController*);

static void KickPlayerHook(AGameSession*, AController*) { return; }