// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/Vector.h"
#include "CoreFwd.h" //?
#include "Math/Rotator.h"


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
	/**/

}


void ATankPawn::GetPosition(float ValueDeltaTime) {
	FVector CurrentPosition = GetActorLocation();
	FVector ForwardVector = GetActorForwardVector();
	FVector RightVector = GetActorRightVector();
	FRotator YawRotation (0.0 , 0.0 , 0.0);
	
	
	//   W
	if ((targetRightAxesValue == 0)  && (targetForwardAxesValue > 0)) {
		YawRotation.Add(0.0, 0, 0.0);
		SetActorRotation(YawRotation);
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * targetForwardAxesValue * ValueDeltaTime; 
		//YawRotation.SetComponentForAxis(EAxis::Type::X, 0.0);
		
		SetActorLocation(movePosition, true); 
	}

	//   S
	else if ((targetRightAxesValue == 0) && (targetForwardAxesValue < 0)) {
		YawRotation.Add(0.0, 180, 0.0);
		//YawRotation.SetComponentForAxis(EAxis::Type::X, 180.0);
		SetActorRotation(YawRotation);
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * (-1) * targetForwardAxesValue * ValueDeltaTime;
		
		SetActorLocation(movePosition, true);
	}

	//   E
	else if ((targetForwardAxesValue == 0) && (targetRightAxesValue > 0)) {

		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed * targetRightAxesValue * ValueDeltaTime;
		YawRotation.Add(0.0, 90, 0.0);
		SetActorRotation(YawRotation);
		//YawRotation.SetComponentForAxis(EAxis::Type::X ,90.0);
		SetActorLocation(movePosition, true);
	}
	//   Q
	else if ((targetForwardAxesValue == 0) && (targetRightAxesValue < 0)) {
		YawRotation.Add(0.0, 270, 0.0);
		SetActorRotation(YawRotation);
		FVector movePosition = CurrentPosition + ForwardVector * MoveSpeed *(-1)* targetRightAxesValue * ValueDeltaTime;
		//YawRotation.SetComponentForAxis(EAxis::Type::X, 270.0);
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

}

void ATankPawn::MoveForward(float Value) {
	targetForwardAxesValue = Value;
}

void ATankPawn::MoveRight(float Value) {
	targetRightAxesValue = Value;
}

/*// Called to bind functionality to input
void ATankPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
*/

