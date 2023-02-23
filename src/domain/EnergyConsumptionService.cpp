#pragma once
#include "pch.h"
#include "EnergyConsumptionService.h"
#include "ConsumptionData.h"

[[nodiscard]] EnergyConsumptionService::EnergyConsumptionService() noexcept
{
	_ConsumptionData.MilliAmps = 16000;
	_ConsumptionData.Volt = 240;
	_ConsumptionData.ElapsedSeconds = 7200;
}

[[nodiscard]] ConsumptionData EnergyConsumptionService::ConsumedEnergy() const
{
	return _ConsumptionData;
}

