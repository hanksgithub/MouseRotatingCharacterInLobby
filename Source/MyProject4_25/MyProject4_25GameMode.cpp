// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject4_25GameMode.h"
#include "MyProject4_25Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject4_25GameMode::AMyProject4_25GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
