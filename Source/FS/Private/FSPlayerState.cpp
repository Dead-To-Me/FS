// Fill out your copyright notice in the Description page of Project Settings.


#include "FS/Public/FSPlayerState.h"

void AFSPlayerState::TimerFinish()
{
    RechargeDash();
}

void AFSPlayerState::AddDashTimer(float Time)
{
    FTimerHandle d;
    GetWorldTimerManager().SetTimer(d, this, &AFSPlayerState::TimerFinish, Time, false);
}
