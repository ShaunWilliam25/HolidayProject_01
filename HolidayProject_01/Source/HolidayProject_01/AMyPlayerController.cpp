// Fill out your copyright notice in the Description page of Project Settings.

#include "AMyPlayerController.h"

AAMyPlayerController::AAMyPlayerController()
{
	
}

void AAMyPlayerController::ShootBullet()
{
	FActorSpawnParameters SpawnDetail;
	SpawnDetail.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnDetail.Owner = GetCharacter();
	FRotator rotation(0, 0, 0);
	FVector position = GetCharacter()->GetActorLocation();
	position.X += 20;

	GetWorld()->SpawnActor<ABullet>(Bullet, position, rotation, SpawnDetail);
	
}

