// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryStub.h"

FInventoryStub::FInventoryStub()
{
	FItemStub* item = new FItemStub(FString("Base"), 1);
	/*FItemStub newItem(FString("Base"), 1);*/
	Items.Add(*item);
	/*Items.Add(newItem);*/
}

//FInventoryStub::~FInventoryStub()
//{
//	// Crash!!!
//	/*for (int32 i = 0; i < Items.Num(); i++) {
//		delete &Items[i];
//	}*/
//
//}

