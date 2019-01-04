// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "PaperCharacter.h"
#include "GameFramework/Actor.h"
#include "Bullet.h"
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
	UFUNCTION(BlueprintCallable,Category = "ShootBullet")
	void ShootBullet();
private:
	UPROPERTY(EditAnywhere, Category = "ShootBullet")
	TSubclassOf<class ABullet> Bullet;
};
