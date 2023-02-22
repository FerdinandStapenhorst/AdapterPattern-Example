#pragma once
#include "pch.h"
#include "IEvConsumedEnergyAdapter.h"

class EvEnergyInfoAdapter : public IEvConsumedEnergyAdapter {
public:
	EvEnergyInfoAdapter() noexcept = delete;
	EvEnergyInfoAdapter(const EvEnergyInfoAdapter& other) noexcept = delete;
	EvEnergyInfoAdapter(EvEnergyInfoAdapter&& other) noexcept = delete;
	virtual ~EvEnergyInfoAdapter() = default;

	[[nodiscard]] EvEnergyInfoAdapter(EnergyInfoPortPtr const energyInfoport) noexcept;

	virtual [[nodiscard]] String ToString() const noexcept override;

private:
	[[nodiscard]] KWhUnit CalculatekWh() const noexcept;
	EnergyInfoPortPtr _EnergyInfoPort;
};