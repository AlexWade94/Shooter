// Shoot Them Up Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "STUHealthPercentDecorator.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USTUHealthPercentDecorator : public UBTDecorator
{
    GENERATED_BODY()
public:
    USTUHealthPercentDecorator();

protected:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float HealthPercent;

    virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;

};
