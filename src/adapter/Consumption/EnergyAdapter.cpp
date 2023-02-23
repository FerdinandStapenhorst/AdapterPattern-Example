#pragma once
#include "pch.h"
#include "EnergyAdapter.h"
#include "IEnergyInfoPort.h"
#include "ConsumptionData.h"

[[nodiscard]] EnergyAdapter::EnergyAdapter(EnergyInfoPortPtr const energyInfoport) noexcept : 
	_EnergyInfoPort{ energyInfoport }
{}

[[nodiscard]] String EnergyAdapter::ToString() const noexcept
{
	return std::format("Consumed {}mA at {}V for {} seconds.",
		_EnergyInfoPort->ConsumedEnergy().MilliAmps,
		_EnergyInfoPort->ConsumedEnergy().Volt,
		_EnergyInfoPort->ConsumedEnergy().ElapsedSeconds);
}
