// Fill out your copyright notice in the Description page of Project Settings.


#include "Samsara_Actor.h"


// Sets default values
ASamsara_Actor::ASamsara_Actor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bNetLoadOnClient = true;
	bReplicates = true;
	SetReplicatingMovement(true);
	
}

// Called when the game starts or when spawned
void ASamsara_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASamsara_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

