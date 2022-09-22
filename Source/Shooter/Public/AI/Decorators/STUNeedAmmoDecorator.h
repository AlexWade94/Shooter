// Shoot Them Up Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "STUNeedAmmoDecorator.generated.h"

/**
 * 
 */
class ASTUBaseWeapon;

UCLASS()
class SHOOTER_API USTUNeedAmmoDecorator : public UBTDecorator
{
	GENERATED_BODY()
public:
    USTUNeedAmmoDecorator();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    TSubclassOf<ASTUBaseWeapon> WeaponType;

    virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
