// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "TankPawn.h"
#include "DamageTaker.h"
#include "Components/StaticMeshComponent.h"

AProjectile::AProjectile()
{
 	PrimaryActorTick.bCanEverTick = false;

    USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = SceneComp;

    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    ProjectileMesh->SetupAttachment(SceneComp);
    ProjectileMesh->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
    ProjectileMesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnMeshOverlapBegin);
}

void AProjectile::Start()
{
    GetWorld()->GetTimerManager().SetTimer(MovementTimer, this, &AProjectile::Move, MoveRate, true, 0.0f);
    
}

bool AProjectile::inUse(ACannon Cannon)
{
    return Cannon.FireRange > 0 ;
}



void AProjectile::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    ///*
    AActor* owner = GetOwner();
    AActor* ownerByOwner = owner != nullptr ? owner->GetOwner() : nullptr;
    if (OtherActor != owner && OtherActor != ownerByOwner)
    {
        IDamageTaker* damageTakerActor = Cast<IDamageTaker>(OtherActor);
        if (damageTakerActor )
        {
            FDamageData damageData;
            damageData.DamageValue = Damage;
            damageData.Instigator = owner;
            damageData.DamageMaker = this;
            damageTakerActor->TakeDamage(damageData);
        }
        else if (this) {
            return;
        }else {
            OtherActor->Destroy();
        }
        Destroy();
    }
    //*/


    /*
    ATankPawn* TankPawn = Cast<ATankPawn>(OtherActor);
    if (!TankPawn ) {
        UE_LOG(LogTemp, Warning, TEXT("Overlapped actor: %s"), *OtherActor->GetName());

            OtherActor->Destroy();
            Destroy();        
    }
    */
  
}

void AProjectile::Move()
{
    FVector nextPosition = GetActorLocation() + GetActorForwardVector() * MoveSpeed * MoveRate;
    SetActorLocation(nextPosition);
}
