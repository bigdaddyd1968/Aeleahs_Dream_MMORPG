// Fill out your copyright notice in the Description page of Project Settings.


#include "Active_NPC_Base.h"

// Sets default values
AActive_NPC_Base::AActive_NPC_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActive_NPC_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActive_NPC_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AActive_NPC_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

