// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "PaperCharacter.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "AMyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_01_API AAMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AAMyPlayerController();
	UFUNCTION(BlueprintCallable, Category = "CameraMovement")
	void MoveCamera();
};
