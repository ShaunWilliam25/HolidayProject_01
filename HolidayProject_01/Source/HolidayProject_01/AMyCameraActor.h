// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "ACharacter.h"
#include "AMyCameraActor.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_01_API AAMyCameraActor : public ACameraActor
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "CameraMovement")
	void AdjustCamera(AACharacter* player);
private:
	UPROPERTY(EditAnywhere, Category="CameraLimit")
	float LeftBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraLimit")
	float TopBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraLimit")
	float BottomBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraLimit")
	float RightBorderLimit;
};
