// Fill out your copyright notice in the Description page of Project Settings.

#include "HonoursProjectUnreal.h"
#include "RTSPlayerController.h"

ARTSPlayerController::ARTSPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;

}

void ARTSPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Super::PlayerInput(InputComponent);


	InputComponent->BindAction("SelectInput", IE_Pressed, this, &ARTSPlayerController::SelectInput);
	InputComponent->BindAction("MovePawn", IE_Pressed, this, &ARTSPlayerController::MovePawn);
}

void ARTSPlayerController::SelectInput()
{
	return;
}

void ARTSPlayerController::MovePawn()
{
	return;
}



