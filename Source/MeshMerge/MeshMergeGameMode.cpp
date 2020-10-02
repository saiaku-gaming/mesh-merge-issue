// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeshMergeGameMode.h"
#include "MeshMergeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeshMergeGameMode::AMeshMergeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
