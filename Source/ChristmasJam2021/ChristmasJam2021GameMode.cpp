// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChristmasJam2021GameMode.h"
#include "ChristmasJam2021HUD.h"
#include "ChristmasJam2021Character.h"
#include "UObject/ConstructorHelpers.h"

AChristmasJam2021GameMode::AChristmasJam2021GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChristmasJam2021HUD::StaticClass();
}
