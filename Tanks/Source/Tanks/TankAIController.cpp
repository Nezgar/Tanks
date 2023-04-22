// Fill out your copyright notice in the Description page of Project Settings.


#include "TAnkAIController.h"
#include "TankPawn.h"

void ATAnkAIController::BeginPlay()
{
	Super::BeginPlay();

	Initialize();

	
	GetWorld()->GetTimerManager().SetTimer(WeaponChangeTimerLoop, this, &ATAnkAIController::WeaponChange, WeaponChangeDelay, true, WeaponChangeDelay);
}

void ATAnkAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!TankPawn)
		Initialize();
	if (!TankPawn)
		return;


	TankPawn->MoveForward(1);
	float rotationValue = GetRotationgValue();
	TankPawn->RotateRight(rotationValue);
	Targeting();

	
}


float ATAnkAIController::GetRotationgValue()
{
	FVector currentPoint = PatrollingPoints[CurrentPatrolPointIndex];
	FVector pawnLocation = TankPawn->GetActorLocation();
	if (FVector::Distance(currentPoint, pawnLocation) <= MovementAccurency)
	{
		CurrentPatrolPointIndex++;
		if (CurrentPatrolPointIndex >= PatrollingPoints.Num())
			CurrentPatrolPointIndex = 0;
	}
	FVector moveDirection = currentPoint - pawnLocation;
	moveDirection.Normalize();
	FVector forwardDirection = TankPawn->GetActorForwardVector();
	FVector rightDirection = TankPawn->GetActorRightVector();
	//DrawDebugLine(GetWorld(), pawnLocation, currentPoint, FColor::Green, false,0.1f, 0, 5);
	float forwardAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(forwardDirection, moveDirection)));
	float rightAngle = 	FMath::RadiansToDegrees(acosf(FVector::DotProduct(rightDirection, moveDirection)));
	float rotationValue = 0;
	if (forwardAngle > 5)
		rotationValue = 1;
	if (rightAngle > 90)
		rotationValue = -rotationValue;
	return rotationValue;
}
void ATAnkAIController::Targeting()
{
	if (CanFire())
		Fire();
	else
		RotateToPlayer();
}
void ATAnkAIController::RotateToPlayer()
{
	if (IsPlayerInRange())
		TankPawn->RotateTurretTo(PlayerPawn->GetActorLocation());
}
bool ATAnkAIController::IsPlayerInRange()
{
	return FVector::Distance(TankPawn->GetActorLocation(),
		PlayerPawn->GetActorLocation()) <= TargetingRange;
}
bool ATAnkAIController::CanFire()
{
	if (!IsPlayerSeen())

		return false;
	FVector targetingDir = TankPawn->GetTurretForwardVector();
	FVector dirToPlayer = PlayerPawn->GetActorLocation() -	TankPawn->GetActorLocation();
	dirToPlayer.Normalize();
	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(targetingDir, dirToPlayer)));
	return aimAngle <= Accurency;
}
bool ATAnkAIController::IsPlayerSeen()
{
	if (!PlayerPawn)
		Initialize();
	
	FVector playerPos = PlayerPawn->GetActorLocation();
	FVector eyesPos = TankPawn->GetEyesPosition();
	FHitResult hitResult;
	FCollisionQueryParams traceParams =	FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
	traceParams.bTraceComplex = true;
	traceParams.AddIgnoredActor(TankPawn);
	traceParams.bReturnPhysicalMaterial = false;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, eyesPos, playerPos,	ECollisionChannel::ECC_Visibility, traceParams))
	{
		if (hitResult.GetActor())
		{
			DrawDebugLine(GetWorld(), eyesPos, hitResult.Location, FColor::Cyan,	false, 0.5f, 0, 10);
			return hitResult.GetActor() == PlayerPawn;
		}
	}
	DrawDebugLine(GetWorld(), eyesPos, playerPos, FColor::Cyan, false, 0.5f, 0, 10);
	return false;
}

void ATAnkAIController::WeaponChange()
{
	if(TankPawn->Cannon->CannonType == ECannonType::FireProjectile)	TankPawn->Cannon->CannonType = ECannonType::FireTrace;
	else { TankPawn->Cannon->CannonType = ECannonType::FireProjectile; }

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Black, "WEAPON AI CHANGED");
}

void ATAnkAIController::Fire()
{
	TankPawn->Fire();
}

void ATAnkAIController::Initialize()
{
	TankPawn = Cast<ATankPawn>(GetPawn());
	if (TankPawn)
	{
		PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		FVector pawnLocation = TankPawn->GetActorLocation();
		MovementAccurency = TankPawn->GetMovementAccurency();
		TArray<FVector> points = TankPawn->GetPatrollingPoints();
		for (FVector point : points)
		{
			PatrollingPoints.Add(point);
		}
		CurrentPatrolPointIndex = 0;
	}
}
