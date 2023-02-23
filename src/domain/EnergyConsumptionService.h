#pragma once
#include "pch.h"
#include "IEnergyInfoPort.h"
#include "ConsumptionData.h"

class EnergyConsumptionService : public IEnergyInfoPort
{
public:
	//Make the default constructor explicit
	[[nodiscard]] explicit EnergyConsumptionService() noexcept;
	//Delete copy constructor which prohibits copy-construct, assigning, move-construct and moving
	EnergyConsumptionService(const EnergyConsumptionService& other) noexcept = delete;
	virtual~EnergyConsumptionService() = default;

	//IEnergyInfoPort overrides
	virtual [[nodiscard]] ConsumptionData ConsumedEnergy() const override;

private:
	ConsumptionData _ConsumptionData;
};



