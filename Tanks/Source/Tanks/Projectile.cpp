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
    if (isHitEnemy(OtherActor)) {

        IDamageTaker* damageTakerActor = Cast<IDamageTaker>(OtherActor);
        if (damageTakerActor)
        {
            if (!isExplodeOn) {
                doDamage(damageTakerActor);
                /*
                FDamageData damageData;
                damageData.DamageValue = Damage;
                damageData.Instigator = owner;
                damageData.DamageMaker = this;
                damageTakerActor->TakeDamage(damageData);
                */
            }
            else  Explode();
        }
        else
        {
            
            if (isPushMesh(OtherActor))
            {
                UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
                if (!isExplodeOn) {
                    if (mesh->IsSimulatingPhysics())
                    {
                        FVector forceVector = OtherActor->GetActorLocation() - GetActorLocation();
                        //forceVector.Normalize();
                        //mesh->AddImpulse(forceVector * PushForce, NAME_None, true);
                        mesh->AddForce(forceVector * PushForce, NAME_None, true);
                    }
                }
                else  Explode();



               
               
            }
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


void AProjectile::Explode()
{
    FVector startPos = GetActorLocation();
    FVector endPos = startPos + FVector(0.1f);
    FCollisionShape Shape = FCollisionShape::MakeSphere(ExplodeRadius);
    FCollisionQueryParams params = FCollisionQueryParams::DefaultQueryParam;
    params.AddIgnoredActor(this);
    params.bTraceComplex = true;
    params.TraceTag = "Explode Trace";
    TArray<FHitResult> AttackHit;
    FQuat Rotation = FQuat::Identity;
    bool sweepResult = GetWorld()->SweepMultiByChannel(AttackHit, startPos, endPos, Rotation, ECollisionChannel::ECC_Visibility, Shape, params);
    //GetWorld()->DebugDrawTraceTag = "Explode Trace";//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (sweepResult)
    {
        for (FHitResult hitResult : AttackHit)
        {
            AActor* otherActor = hitResult.GetActor();
            if (!otherActor)
                continue;
            IDamageTaker* damageTakerActor = Cast<IDamageTaker>(otherActor);
            if (damageTakerActor)
            {
                doDamage(damageTakerActor);
            }
            else
            {
                UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(otherActor->GetRootComponent());
                if (mesh)
                {
                    if (mesh->IsSimulatingPhysics())
                    {
                        FVector forceVector = otherActor->GetActorLocation() - GetActorLocation();
                        forceVector.Normalize();
                        mesh->AddImpulse(forceVector * PushForce, NAME_None, true);
                    }
                }
            }
        }
    }
}

void AProjectile::doDamage(IDamageTaker* damageTakerActor)
{
    FDamageData damageData;
    damageData.DamageValue = Damage;
    damageData.Instigator = GetOwner();
    damageData.DamageMaker = this;
    damageTakerActor->TakeDamage(damageData);
}

bool AProjectile::isHitEnemy(AActor* OtherActor)
{
    AActor* owner = GetOwner();
    AActor* ownerByOwner = owner != nullptr ? owner->GetOwner() : nullptr;
    if (OtherActor != owner && OtherActor != ownerByOwner) {
        return true;
    }
    else return false;
    
}

bool AProjectile::isPushMesh(AActor* OtherActor)
{
    UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
    if (mesh) {
        return true;
    } else  return false;
}
