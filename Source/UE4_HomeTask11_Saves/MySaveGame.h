// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "InventoryStub.h"
#include "Kismet/GameplayStatics.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE4_HOMETASK11_SAVES_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

//private:
//	FString SlotNamePrefix = "SaveSlot_";

public:

	/*UMySaveGame();*/
	/*UMySaveGame(FString SlotNameArg, int32 SlotIndexArg);*/

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveData")
		int32 SlotIndex;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveData")
		FString SlotName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameData")
		FVector Position = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameData")
		FInventoryStub Inventory;

	UFUNCTION(BlueprintCallable)
		void SetNameIndex(FString SlotNameArg, int32 SlotIndexArg);
	UFUNCTION(BlueprintCallable)
		void Save();
	UFUNCTION(BlueprintCallable)
		void Load();
	UFUNCTION(BlueprintCallable)
		void PrintInventory();
	UFUNCTION(BlueprintCallable)
		void Init();
	UFUNCTION(BlueprintNativeEvent)
		void PrepareSlot();
	

};
