#pragma once
#include "pch.h"
#include "EnergyConsumptionService.h"
#include "ConsumptionData.h"

[[nodiscard]] EnergyConsumptionService::EnergyConsumptionService() noexcept
{
	LoadConsumption();
}

[[nodiscard]] ConsumptionData EnergyConsumptionService::ConsumedEnergy() const
{
	return _ConsumptionData;
}

void EnergyConsumptionService::ConsumedEnergy(UInt const& milliAmps, UInt const& volt, UInt const& elapsedSeconds)
{
	_ConsumptionData.MiliAmps(milliAmps);
	_ConsumptionData.Volt(volt);
	_ConsumptionData.ElapsedSeconds(elapsedSeconds);
}

void EnergyConsumptionService::LoadConsumption()
{
	ConsumedEnergy(16000, 240, 7200);
}