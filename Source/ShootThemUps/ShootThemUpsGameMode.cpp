// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootThemUpsGameMode.h"
#include "ShootThemUpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootThemUpsGameMode::AShootThemUpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
