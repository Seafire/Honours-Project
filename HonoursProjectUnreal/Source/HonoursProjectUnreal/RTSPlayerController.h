// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "RTSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HONOURSPROJECTUNREAL_API ARTSPlayerController : public APlayerController
{
	GENERATED_BODY()

		ARTSPlayerController();

private:
	/* Set up the player movement */
	void SetupInputComponent();

public:

	UFUNCTION()
		void SelectInput();

	UFUNCTION()
		void MovePawn();
	
	
};
