// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelData.h"

// Sets default values
ALevelData::ALevelData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	NumberOfRPSCharacters = 100;
}

// Called when the game starts or when spawned
void ALevelData::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < NumberOfRPSCharacters; i++)
	{
		TargetSpawnAreaForRPSCharacters->SpawnARPSSimulationCharacter();
	}
	
}

