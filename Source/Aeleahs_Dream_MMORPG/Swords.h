// Copyright Pending...

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Swords.generated.h"

UCLASS()
class AELEAHS_DREAM_MMORPG_API ASwords : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwords();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
