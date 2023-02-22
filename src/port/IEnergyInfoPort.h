#pragma once
#include "pch.h"

//EnergyInfoAdapter port interface
class IEnergyInfoPort {
public:
	 virtual [[nodiscard]] ConsumptionData ConsumedEnergy() const = 0;
};

