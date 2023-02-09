#pragma once
#include "pch.h"
#include "EvEnergyInfo.h"
#include "EvConsumptionData.h"
#include "ConsumptionData.h"
#include "IEnergyInfo.h"

EvEnergyInfo::EvEnergyInfo(IEnergyInfoPtr const energyInfoport)
{
	_EnergyInfo = energyInfoport;
}

EvConsumptionData EvEnergyInfo::ConsumedEnergy() const
{
	EvConsumptionData evConsumptionData(CalculatekWh());
	return evConsumptionData;
}

String EvEnergyInfo::ToString() const
{
	return std::format("{}kWh", CalculatekWh());
}

KWhUnit EvEnergyInfo::CalculatekWh() const
{
	if (_EnergyInfo->ConsumedEnergy().ElapsedSeconds() <= 0)
		return 0.0;
	KWhUnit ampere = _EnergyInfo->ConsumedEnergy().MiliAmps() / 1000;
	KWhUnit hours = _EnergyInfo->ConsumedEnergy().ElapsedSeconds() / 3600;
	KWhUnit kwh = ampere * _EnergyInfo->ConsumedEnergy().Volt() / hours / 1000;

	return  std::round(kwh * 10000) / 10000;
}