// Copyright Epic Games, Inc. All Rights Reserved.

#include "SnowballGameMode.h"
#include "SnowballCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASnowballGameMode::ASnowballGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
