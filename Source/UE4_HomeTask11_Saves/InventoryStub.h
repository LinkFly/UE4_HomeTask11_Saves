// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryStub.generated.h"

USTRUCT(Blueprintable)
struct UE4_HOMETASK11_SAVES_API FItemStub
{
	GENERATED_USTRUCT_BODY()
public:
	FItemStub() {};
	FItemStub(FString Name, int32 Power) : MagicName(Name), MagicPower(Power) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MagicName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MagicPower;

};

/** 
 * 
 */
USTRUCT(Blueprintable)
struct UE4_HOMETASK11_SAVES_API FInventoryStub
{
	GENERATED_USTRUCT_BODY()
public:

	FInventoryStub();
	/*~FInventoryStub();*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FItemStub> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString InventoryDescription = "This is inventory stub";
};
