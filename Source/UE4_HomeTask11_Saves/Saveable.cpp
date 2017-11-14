// Fill out your copyright notice in the Description page of Project Settings.

#include "Saveable.h"

USaveable::USaveable()
{
	
}

void USaveable::TestMyCustomSerialization()
{
	/*GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, "TestMyCustomSerialization:");
	for (TFieldIterator<UProperty> PropIt(GetClass()); PropIt; ++PropIt) {
		UProperty* Prop = *PropIt;
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, "Property name: " + Prop->GetName());
		if (Prop->GetName() == "Test") {
			Property = Prop;
		}
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, "Property type: " + Prop->GetCPPType());
	}*/
	
}

USaveable::~USaveable()
{
}
