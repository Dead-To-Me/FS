// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "FSPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class FS_API AFSPlayerState : public APlayerState
{
    GENERATED_BODY()
    void TimerFinish();
public:
    UFUNCTION(BlueprintCallable)
    void AddDashTimer(float Time);

    UFUNCTION(BlueprintImplementableEvent)
    void RechargeDash();
};