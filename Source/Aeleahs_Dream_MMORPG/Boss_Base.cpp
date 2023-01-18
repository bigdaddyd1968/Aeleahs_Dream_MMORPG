// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss_Base.h"

// Sets default values
ABoss_Base::ABoss_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoss_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoss_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABoss_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

