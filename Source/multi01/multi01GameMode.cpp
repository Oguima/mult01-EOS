// Copyright Epic Games, Inc. All Rights Reserved.

#include "multi01GameMode.h"
#include "multi01Character.h"
#include "UObject/ConstructorHelpers.h"

Amulti01GameMode::Amulti01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
