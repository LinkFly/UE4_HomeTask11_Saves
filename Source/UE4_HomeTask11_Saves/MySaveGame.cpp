// Fill out your copyright notice in the Description page of Project Settings.

#include "MySaveGame.h"

//UMySaveGame::UMySaveGame() {
//	
//}
//UMySaveGame::UMySaveGame() {
//	static int32 instanceIdx = 0;
//	SlotIndex = ++instanceIdx;
//	SlotName = SlotNamePrefix + this->GetClass()->GetName() + "_" + FString::FromInt(SlotIndex);
//	
//}
//
//UMySaveGame::UMySaveGame(FString SlotNameArg, int32 SlotIndexArg) : SlotName(SlotNameArg), SlotIndex(SlotIndexArg)
//{
//}

void UMySaveGame::SetNameIndex(FString SlotNameArg, int32 SlotIndexArg)
{
	SlotName = SlotNameArg;
	SlotIndex = SlotIndexArg;
}

void UMySaveGame::Save() {
	/*GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, Inventory.Items[0].MagicName);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, FString::FromInt(Inventory.Items[0].MagicPower));*/
	UGameplayStatics::SaveGameToSlot(this, SlotName, SlotIndex);
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, "Saved! Slot: " + SlotName);
}

void UMySaveGame::Load() {
	UMySaveGame* LoadedData = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, SlotIndex));
	if (LoadedData) {
		this->Inventory = LoadedData->Inventory;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, "Loaded! Slot: " + SlotName);
		this->PrintInventory();
	}
}

void UMySaveGame::PrintInventory()
{
	for (int32 i = 0; i < Inventory.Items.Num(); i++) {
		FItemStub& item = Inventory.Items[i];
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, "Magic: " + item.MagicName + "   |  Power: " + FString::FromInt(item.MagicPower));
	}
}

void UMySaveGame::Init()
{
	PrepareSlot();
}


void UMySaveGame::PrepareSlot_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("(Using SlotName and SlotIndex by default)"));
	static int32 instanceIdx = 0;
	SlotIndex = ++instanceIdx;
	SlotName = "SaveSlot_" + this->GetClass()->GetName() + "_" + FString::FromInt(SlotIndex);
}


