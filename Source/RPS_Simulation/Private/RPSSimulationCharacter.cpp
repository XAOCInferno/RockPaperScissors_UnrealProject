// Fill out your copyright notice in the Description page of Project Settings.


#include "RPSSimulationCharacter.h"

// Sets default values
ARPSSimulationCharacter::ARPSSimulationCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Define all Combats as 0 chance for each, editable in BP
	for (ECombatTypes CombatType : TEnumRange<ECombatTypes>())
	{
		CombatTendancies.Add(TTuple<ECombatTypes, int32>(CombatType, 0));
	}

	//Basic stats, editable in BP
	VisionRange = 100;
	VisionDetectionCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Vision Radius Collider"));
	VisionDetectionCollider->InitSphereRadius(VisionRange);
	VisionDetectionCollider->SetupAttachment(RootComponent);

	MaxHunger = 100;
	MaxSpeed = 100;
	MinSpeed = 10;
	MaxSpeed_MultiplierFromReproductiveDrive = 2;

	DesiredPosition = GetActorLocation();

	CurrentHunger = MaxHunger;
	CurrentSpeed = MaxSpeed;
	CurrentAge = 0;

}

// Called when the game starts or when spawned
void ARPSSimulationCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARPSSimulationCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARPSSimulationCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARPSSimulationCharacter::SetMoveDestination(FVector NewDestination) 
{
	DesiredPosition = NewDestination;
}

bool ARPSSimulationCharacter::GetHasReachedDestination()
{

	double DistanceFromDestination = FVector::Distance(GetActorLocation(), DesiredPosition);

	if (DistanceFromDestination <= RequiredDistanceToBeInRangeOfDestination) 
	{
		return true;
	}

	return false;
	
}

bool ARPSSimulationCharacter::GetIfHungry()
{

	if (CurrentHunger <= MaxHunger * RequiredPercentageOfHungerToBeHungry)
	{
		return true;
	}

	return false;

}

bool ARPSSimulationCharacter::GetIfCanMate()
{

	if (CurrentAge >= RequiredAgeToMate)
	{
		return true;
	}

	return false;

}

