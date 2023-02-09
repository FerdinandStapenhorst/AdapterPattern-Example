#pragma once
#include "pch.h"

//Energy Info Interface
class IEnergyInfo {
public:
	virtual ConsumptionData ConsumedEnergy() const = 0;
	virtual String ToString() const = 0;
};