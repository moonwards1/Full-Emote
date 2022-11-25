// Copyright Epic Games, Inc. All Rights Reserved.

#include "GesturesExpressionsGameMode.h"
#include "GesturesExpressionsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGesturesExpressionsGameMode::AGesturesExpressionsGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_MetaHumanBlueprint"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<AHUD> PlayerHudBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_EmoteHud"));
	if (PlayerHudBPClass.Class != NULL)
	{
		HUDClass = PlayerHudBPClass.Class;
	}
}
