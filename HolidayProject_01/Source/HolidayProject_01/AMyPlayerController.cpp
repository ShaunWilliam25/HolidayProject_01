// Fill out your copyright notice in the Description page of Project Settings.

#include "AMyPlayerController.h"

AAMyPlayerController::AAMyPlayerController()
{
	
}

void AAMyPlayerController::MoveCamera()
{
	FVector newPosition;
	
	ACharacter* player = this->GetCharacter();
	player->GetActorLocation();
	

	//PlayerCameraManager->GetViewTarget()->SetActorLocation(newPosition);
}
