// Fill out your copyright notice in the Description page of Project Settings.

#include "AMyCameraActor.h"

void AAMyCameraActor::AdjustCamera(AACharacter* player)
{
	FVector newPosition;
	newPosition = player->GetActorLocation();
	if (newPosition.X < LeftBorderLimit)
	{
		newPosition.X = LeftBorderLimit;
	}
	if (newPosition.X > RightBorderLimit)
	{
		newPosition.X = RightBorderLimit;
	}
	if (newPosition.Z < BottomBorderLimit)
	{
		newPosition.Z = BottomBorderLimit;
	}
	if (newPosition.Z > TopBorderLimit)
	{
		newPosition.Z = TopBorderLimit;
	}
	this->SetActorLocation(math.Lerp(this->GetActorLocation(), newPosition, CameraDelay));
	
	
}