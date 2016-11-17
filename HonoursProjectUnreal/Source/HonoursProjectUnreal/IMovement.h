// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "IMovement.generated.h"

/**
 * 
 */
UINTERFACE(BlueprintType)
class HONOURSPROJECTUNREAL_API UIMovement : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class HONOURSPROJECTUNREAL_API IIMovement
{
	GENERATED_IINTERFACE_BODY ()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MyCategory")
		bool ReactToHighNoon();

};
