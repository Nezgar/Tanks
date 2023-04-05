// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/Vector.h"
#include "CoreFwd.h" //?
#include "Math/Rotator.h"
#include "TankPlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cannon.h"
#include "AmmoBox.h"
#include "GamePool.h"



// Sets default values
ATankPawn::ATankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = BoxCollision;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(BoxCollision);

	
	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh);

	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BoxCollision);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;


	Camera  = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera ->SetupAttachment(SpringArm);


	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CannonSetupPoint"));
	CannonSetupPoint->SetupAttachment(TurretMesh);
	/**/

}


void ATankPawn::GetPosition(float ValueDeltaTime) {
	FVector CurrentPosition = GetActorLocation();
	FVector ForwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();
	FRotator YawRotation (0.0 , 0.0 , 0.0);
	
	
	//   W
	if ((targetRightAxesValue == 0)  && (targetForwardAxesValue > 0)) {
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * targetForwardAxesValue * ValueDeltaTime; 
		SetActorLocation(movePosition, true); 
	}

	//   S
	else if ((targetRightAxesValue == 0) && (targetForwardAxesValue < 0)) {
		FVector movePosition = CurrentPosition - ForwardVector * MoveSpeed *(-1) * targetForwardAxesValue * ValueDeltaTime;
		SetActorLocation(movePosition, true);
	}

	//   E
	else if ((targetForwardAxesValue == 0) && (targetRightAxesValue > 0)) {

		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * targetRightAxesValue * ValueDeltaTime;

		YawRotation.Add(0.0, 90, 0.0);
		SetActorRotation(YawRotation);
		SetActorLocation(movePosition, true);
	}
	//   Q
	else if ((targetForwardAxesValue == 0) && (targetRightAxesValue < 0)) {
		YawRotation.Add(0.0, 270, 0.0);
		SetActorRotation(YawRotation);
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed *(-1)* targetRightAxesValue * ValueDeltaTime;
		SetActorLocation(movePosition, true);
	}
	// diag moving 

	// (W,E)  
	else if ((targetForwardAxesValue == targetRightAxesValue) && targetForwardAxesValue > 0) {
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * targetForwardAxesValue * ValueDeltaTime;
		YawRotation.Add(0.0, 45.0, 0.0);
		SetActorRotation(YawRotation);
		SetActorLocation(movePosition, true);
	}
	// (S,Q)
	else if ((targetForwardAxesValue == targetRightAxesValue) && targetForwardAxesValue< 0) {
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed* (-1) * targetForwardAxesValue * ValueDeltaTime;
		YawRotation.Add(0.0, 225.0, 0.0);
		//YawRotation.SetComponentForAxis(EAxis::Type::X, 225.0);
		SetActorRotation(YawRotation);
		SetActorLocation(movePosition, true);
	}
	// (W,Q)
	else if (targetForwardAxesValue > 0  && targetRightAxesValue < 0) {
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * targetForwardAxesValue * ValueDeltaTime;
		YawRotation.Add(0.0, 315.0, 0.0);
		SetActorRotation(YawRotation);
		SetActorLocation(movePosition, true);
	}
	// (S,E)
	else if (targetForwardAxesValue < 0 && targetRightAxesValue > 0) {
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed *(-1)* targetForwardAxesValue * ValueDeltaTime;
		YawRotation.Add(0.0, 135.0, 0.0);
		SetActorRotation(YawRotation);
		SetActorLocation(movePosition, true);
	}
		
		

	

	
}

////Tank rotation
void ATankPawn::TankRotation(float DeltaTime) {
	float yawRotation = RotationSpeed * targetRotateRightAxisValue * DeltaTime;
	float LerpRotateValue = FMath::Lerp(targetRotateRightAxisValue,LerpRotateValue, TurretRotationInterpolationKey);
	FRotator currentRotation = GetActorRotation();
	yawRotation += currentRotation.Yaw;
	FRotator newRotation = FRotator(0.0f, yawRotation, 0.0f);
	SetActorRotation(newRotation);
	//UE_LOG(LogTemp, Warning, TEXT("Non lerp: %f, Lerp: %f"), targetRotateRightAxisValue, LerpRotateValue);
 
}

void ATankPawn::Fire()
{
	if (Cannon) {
		Cannon->Fire();
	}
}

void ATankPawn::SetFireAlternative()
{
	if (Cannon) {
		Cannon->SetFireAlternative();
	}
}

void ATankPawn::FireTypeChange()
{
	/*
	if (Cannon) {
		Cannon->FireTypeChange(this);
	}*/
	
}

void ATankPawn::SetupCannon(TSubclassOf<ACannon> newCannonClass,AAmmoBox *AmmoBox)
{
	if (!newCannonClass) {
		return;
		}

	
	if (Cannon) {
		ProjectileAmmoBuf = Cannon->ProjectileAmmo;
		TraceAmmoBuf = Cannon->TraceAmmo;
		SpecialAmmoBuf = Cannon->SpecialAmmo;
		Cannon->Destroy();
	}

	FActorSpawnParameters spawnParams;
	spawnParams.Instigator = this;
	spawnParams.Owner = this;

	
	Cannon = GetWorld()->SpawnActor<ACannon>(newCannonClass, spawnParams);
	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	ACannon* this_ = Cannon;
	if(AmmoBox) AmmoBox->AmmoAdd(this_, ProjectileAmmoBuf, TraceAmmoBuf, SpecialAmmoBuf);

}

//Turret Rotation
void ATankPawn::TurretDirection() {
	if (TankController) {
		FVector mousePos = TankController->GetMousePosition();
		FRotator targetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), mousePos);
		FRotator TurretRotation = TurretMesh->GetComponentRotation();
		targetRotation.Pitch = TurretRotation.Pitch;
		targetRotation.Roll = TurretRotation.Roll;
		FRotator newTurretRotation = FMath::Lerp(TurretRotation, targetRotation, TurretRotationInterpolationKey);
		TurretMesh->SetWorldRotation(newTurretRotation);
		//UE_LOG(LogTemp,Warning,TEXT("targetRotation: %s, LerpRotation: %s"), *targetRotation.ToString(), *newTurretRotation.ToString())
	} 
}

/*
// Called when the game starts or when spawned
void ATankPawn::BeginPlay()
{
	Super::BeginPlay();

	}
	*/
	

// Called every frame
void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GetPosition(DeltaTime);

	TankRotation( DeltaTime);
	
	TurretDirection();
}

void ATankPawn::MoveForward(float Value) {
	targetForwardAxesValue = Value;
}

void ATankPawn::MoveRight(float Value) {
	targetRightAxesValue = Value;
}

void ATankPawn::RotateRight(float Value) {
	targetRotateRightAxisValue = Value;
}

void  ATankPawn::BeginPlay() {
	Super::BeginPlay();
	TankController = Cast<ATankPlayerController>(GetController());
	SetupCannon(CannonClass);

	//GamePool->PoolAdd(Projectile);

}

/*// Called to bind functionality to input
void ATankPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
*/

