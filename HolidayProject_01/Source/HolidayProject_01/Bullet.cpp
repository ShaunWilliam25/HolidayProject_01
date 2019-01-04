// Fill out your copyright notice in the Description page of Project Settings.

#include "Bullet.h"

void ABullet::Movement()
{
	FVector NewPosition;
	NewPosition = this->GetActorLocation();
	NewPosition.X += MovementSpeed;

	this->SetActorLocation(FMath::Lerp(this->GetActorLocation(), NewPosition, 1));
}