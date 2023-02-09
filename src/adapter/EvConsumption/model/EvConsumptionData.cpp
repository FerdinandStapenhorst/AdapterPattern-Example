#pragma once
#include "pch.h"
#include "EvConsumptionData.h"

KWhUnit EvConsumptionData::kWh() const
{
	return _kWh;
}

void EvConsumptionData::kWh(KWhUnit const& value)
{
	_kWh = value;
}