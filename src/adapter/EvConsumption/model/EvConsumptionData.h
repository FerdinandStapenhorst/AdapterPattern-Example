#pragma once
#include "pch.h"

class EvConsumptionData {
public:
	EvConsumptionData() noexcept = default;
	EvConsumptionData(const EvConsumptionData& other) noexcept = default;
	EvConsumptionData(EvConsumptionData&& other) noexcept = default;

	EvConsumptionData(KWhUnit const& kWh) : _kWh{ kWh } {};

	KWhUnit kWh() const;
	void kWh(KWhUnit const& value);

private:
	KWhUnit _kWh{ 0U };
};