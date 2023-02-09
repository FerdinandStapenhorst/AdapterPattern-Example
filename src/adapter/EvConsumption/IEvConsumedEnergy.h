#pragma once
#include "pch.h"

//Ev consumption interface
class IEvConsumedEnergy {
public:
	virtual EvConsumptionData ConsumedEnergy() const = 0;
	virtual String ToString() const = 0;
};
