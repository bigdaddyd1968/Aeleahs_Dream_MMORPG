// Copyright Epic Games, Inc. All Rights Reserved.

#include "Aeleahs_Dream_MMORPGGameMode.h"
#include "Aeleahs_Dream_MMORPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAeleahs_Dream_MMORPGGameMode::AAeleahs_Dream_MMORPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
