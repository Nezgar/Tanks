// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoBox.h"
#include "TankPlayerController.h"
#include "Cannon.h"
#include "TankPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Components/ActorComponent.h"

// Sets default values
AAmmoBox::AAmmoBox()
{
 	PrimaryActorTick.bCanEverTick = false;

    USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = SceneComp;

    AmmoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
    AmmoMesh->SetupAttachment(SceneComp);
    AmmoMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    AmmoMesh->SetCollisionProfileName("OverlapAll");
    AmmoMesh->OnComponentBeginOverlap.AddDynamic(this, &AAmmoBox::OnMeshOverlapBegin);
    AmmoMesh->SetGenerateOverlapEvents(true);
}

 void AAmmoBox::AmmoAdd(ACannon *CannonActor, float ProjectileAmmoBuf, float TraceAmmoBuf,float SpecialAmmoBuf)
{
     if (CannonActor->CannonType == ECannonType::FireProjectile) {
         ProjectileAmmoBuf += quantity;
         CannonActor->ProjectileAmmo = ProjectileAmmoBuf;
     }else if(CannonActor->CannonType == ECannonType::FireTrace) {
         TraceAmmoBuf += quantity;
         CannonActor->TraceAmmo = TraceAmmoBuf;
     }
     else {
         SpecialAmmoBuf += quantity;
         CannonActor->SpecialAmmo = SpecialAmmoBuf;
     }
    
   
    //UE_LOG(LogTemp, Warning, TEXT("Non lerp: %f"), quantity);
    
}

void AAmmoBox::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
   
    ATankPawn* TankPawn = Cast<ATankPawn>(OtherActor);
    if (TankPawn) {
        //AmmoAdd(TankPawn);
        TankPawn->SetupCannon(CannonClass,this);

        Destroy(); 
    }

}
