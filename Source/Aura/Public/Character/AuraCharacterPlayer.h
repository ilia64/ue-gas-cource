// Copyright nobody.

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "AuraCharacterPlayer.generated.h"

UCLASS()
class AURA_API AAuraCharacterPlayer : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacterPlayer();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilitySystem();
};
