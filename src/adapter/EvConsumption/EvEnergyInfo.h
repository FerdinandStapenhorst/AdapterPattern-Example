#pragma once
#include "pch.h"
#include "IEvConsumedEnergy.h"

class EvEnergyInfo : public IEvConsumedEnergy {
public:
	EvEnergyInfo() noexcept = delete;
	EvEnergyInfo(const EvEnergyInfo& other) noexcept = delete;
	EvEnergyInfo(EvEnergyInfo&& other) noexcept = delete;

	EvEnergyInfo(IEnergyInfoPtr const energyInfoport);

	virtual EvConsumptionData ConsumedEnergy() const override;
	virtual String ToString() const override;

private:
	KWhUnit CalculatekWh() const;
	IEnergyInfoPtr _EnergyInfo;
};