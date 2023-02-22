#pragma once
#include "pch.h"
#include "EnergyInfoAdapter.h"
#include "IEnergyInfoPort.h"
#include "ConsumptionData.h"

[[nodiscard]] EnergyInfoAdapter::EnergyInfoAdapter(EnergyInfoPortPtr const energyInfoport) noexcept : 
	_EnergyInfoPort{ energyInfoport }
{}

[[nodiscard]] String EnergyInfoAdapter::ToString() const noexcept
{
	return std::format("Consumed {}mA at {}V for {} seconds.",
		_EnergyInfoPort->ConsumedEnergy().MiliAmps(),
		_EnergyInfoPort->ConsumedEnergy().Volt(),
		_EnergyInfoPort->ConsumedEnergy().ElapsedSeconds());
}
