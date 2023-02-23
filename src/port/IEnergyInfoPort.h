#pragma once
#include "pch.h"

//EnergyAdapter port interface
class IEnergyInfoPort {
public:
	 virtual [[nodiscard]] ConsumptionData ConsumedEnergy() const = 0;
};

