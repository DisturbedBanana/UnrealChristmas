// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ChristmasJam2021HUD.generated.h"

UCLASS()
class AChristmasJam2021HUD : public AHUD
{
	GENERATED_BODY()

public:
	AChristmasJam2021HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

