// Copyright Epic Games, Inc. All Rights Reserved.

#include "Rand_RecoilGameMode.h"
#include "Rand_RecoilCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARand_RecoilGameMode::ARand_RecoilGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
