// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnArea.h"

// Sets default values
ASpawnArea::ASpawnArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SpawnAreaRadius = 300;
	SpawnAreaCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Spawn Radius Collider"));

}

void ASpawnArea::SpawnAActor(AActor* ActorToSpawn)
{

	GetWorld()->SpawnActor<AActor>(ActorToSpawn->StaticClass(), GetSpawnablePosition(), FRotator(0, 0, 0), FActorSpawnParameters());

}

void ASpawnArea::SpawnARPSSimulationCharacter()
{

	GetWorld()->SpawnActor<ARPSSimulationCharacter>(ARPSSimulationCharacter::StaticClass(), GetSpawnablePosition(), FRotator(0, 0, 0), FActorSpawnParameters());

}

const FVector ASpawnArea::GetSpawnablePosition() 
{

	GEngine->AddOnScreenDebugMessage(0, 4, FColor::Yellow, TEXT("'GetSpawnablePosition', no defined behaviour."));
	
	return FVector(FMath::RandRange(-1000, 1000), 2, FMath::RandRange(-1000, 1000));
}

