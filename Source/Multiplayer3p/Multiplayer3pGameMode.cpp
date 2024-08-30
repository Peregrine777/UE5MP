// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer3pGameMode.h"
#include "Multiplayer3pCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer3pGameMode::AMultiplayer3pGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
