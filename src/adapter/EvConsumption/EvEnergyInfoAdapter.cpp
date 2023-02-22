#pragma once
#include "pch.h"
#include "EvEnergyInfoAdapter.h"
#include "ConsumptionData.h"
#include "IEnergyInfoPort.h"

[[nodiscard]] EvEnergyInfoAdapter::EvEnergyInfoAdapter(EnergyInfoPortPtr const energyInfoport) noexcept :
	_EnergyInfoPort{ energyInfoport }
{}

[[nodiscard]] String EvEnergyInfoAdapter::ToString() const noexcept
{
	return std::format("Consumed {}kWh", CalculatekWh());
}

[[nodiscard]] KWhUnit EvEnergyInfoAdapter::CalculatekWh() const noexcept
{
	if (_EnergyInfoPort->ConsumedEnergy().ElapsedSeconds() <= 0)
		return 0.0;
	KWhUnit ampere = _EnergyInfoPort->ConsumedEnergy().MiliAmps() / 1000;
	KWhUnit hours = _EnergyInfoPort->ConsumedEnergy().ElapsedSeconds() / 3600;
	KWhUnit kwh = ampere * _EnergyInfoPort->ConsumedEnergy().Volt() / hours / 1000;

	return  std::round(kwh * 10000) / 10000;
}