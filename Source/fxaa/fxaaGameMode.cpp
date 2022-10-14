// Copyright Epic Games, Inc. All Rights Reserved.

#include "fxaaGameMode.h"
#include "fxaaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfxaaGameMode::AfxaaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
