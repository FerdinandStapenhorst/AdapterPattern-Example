#pragma once
#include "pch.h"
#include "EnergyInfo.h"
#include "ConsumptionData.h"

EnergyInfo::EnergyInfo() noexcept
{
	LoadConsumption();
}

ConsumptionData EnergyInfo::ConsumedEnergy() const
{
	return _ConsumptionData;
}

String EnergyInfo::ToString() const
{
	return std::format("{}mA at {}V for {} seconds.",
		_ConsumptionData.MiliAmps(),
		_ConsumptionData.Volt(),
		_ConsumptionData.ElapsedSeconds());
}

void EnergyInfo::ConsumedEnergy(UInt const& milliAmps, UInt const& volt, UInt const& elapsedSeconds)
{
	_ConsumptionData.MiliAmps(milliAmps);
	_ConsumptionData.Volt(volt);
	_ConsumptionData.ElapsedSeconds(elapsedSeconds);
}

void EnergyInfo::LoadConsumption()
{
	ConsumedEnergy(16000, 240, 7200);
}