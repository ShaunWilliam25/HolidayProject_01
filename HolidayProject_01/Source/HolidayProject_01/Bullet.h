// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Bullet.generated.h"

/**
 * 
 */
UCLASS()
class HOLIDAYPROJECT_01_API ABullet : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "AutoMovement")
	void Movement();

private:
	UPROPERTY(EditAnywhere, Category = "AutoMovement")
	float MovementSpeed;
};
