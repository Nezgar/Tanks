// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonChange.h"
#include "TankPawn.h"

// Sets default values
ACannonChange::ACannonChange()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = SceneComp;

    CannonChangeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CannonChangeMesh"));
    CannonChangeMesh->SetupAttachment(SceneComp);
    CannonChangeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    CannonChangeMesh->SetCollisionProfileName("OverlapAll");
    CannonChangeMesh->OnComponentBeginOverlap.AddDynamic(this, &ACannonChange::OnMeshOverlapBegin);
    CannonChangeMesh->SetGenerateOverlapEvents(true);
}


void ACannonChange::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

    ATankPawn* TankPawn = Cast<ATankPawn>(OtherActor);
    if (TankPawn) {
        //AmmoAdd(TankPawn);
        TankPawn->SetupCannon(CannonClass);

        Destroy();
    }
}
