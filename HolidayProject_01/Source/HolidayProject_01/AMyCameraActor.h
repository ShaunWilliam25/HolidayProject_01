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
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float LeftBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float TopBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float BottomBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float RightBorderLimit;
	UPROPERTY(EditAnywhere, Category = "CameraMovement")
	float CameraDelay;
	FMath math;
};
