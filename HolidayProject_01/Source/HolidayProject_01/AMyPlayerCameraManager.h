// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "AMyPlayerCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_01_API AAMyPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	AAMyPlayerCameraManager();
	void FindMainCamera();
};
