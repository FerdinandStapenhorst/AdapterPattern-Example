#pragma once
#include "pch.h"
#include "IEnergyInfoPort.h"
#include "ConsumptionData.h"

class EnergyConsumptionService : public IEnergyInfoPort
{
public:
	[[nodiscard]] explicit EnergyConsumptionService() noexcept;
	EnergyConsumptionService(const EnergyConsumptionService& other) noexcept = delete;
	EnergyConsumptionService(EnergyConsumptionService&& other) noexcept = delete;

	virtual [[nodiscard]] ConsumptionData ConsumedEnergy() const override;

private:
	void ConsumedEnergy(UInt const& milliAmps, UInt const& volt, UInt const& elapsedSeconds);
	ConsumptionData _ConsumptionData;
	void LoadConsumption();
};

