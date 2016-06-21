// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UObjectPluginPrivatePCH.h"
#include "MyPluginObject.h"


UMyPluginObject::UMyPluginObject( const FObjectInitializer& ObjectInitializer )
	: Super( ObjectInitializer )
{
}

void UMyPluginObject::hello()
{
	UE_LOG(LogTemp, Warning, TEXT("Hello world!"));
}