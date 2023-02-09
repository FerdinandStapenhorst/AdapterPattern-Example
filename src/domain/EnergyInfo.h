#pragma once
#include "pch.h"
#include "IEnergyInfo.h"
#include "ConsumptionData.h"

class EnergyInfo : public IEnergyInfo
{
public:
	EnergyInfo() noexcept;
	EnergyInfo(const EnergyInfo& other) noexcept = delete;
	EnergyInfo(EnergyInfo&& other) noexcept = delete;

	virtual ConsumptionData ConsumedEnergy() const override;
	virtual String ToString() const override;
	void ConsumedEnergy(UInt const& milliAmps, UInt const& volt, UInt const& elapsedSeconds);
private:
	ConsumptionData _ConsumptionData;
	void LoadConsumption();
};