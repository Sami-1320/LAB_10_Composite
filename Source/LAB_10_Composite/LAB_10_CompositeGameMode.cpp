// Copyright Epic Games, Inc. All Rights Reserved.

#include "LAB_10_CompositeGameMode.h"
#include "LAB_10_CompositeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALAB_10_CompositeGameMode::ALAB_10_CompositeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
