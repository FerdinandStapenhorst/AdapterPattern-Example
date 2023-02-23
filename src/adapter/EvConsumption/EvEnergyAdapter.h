#pragma once
#include "pch.h"
#include "IEvEnergyAdapter.h"

class EvEnergyAdapter : public IEvEnergyAdapter {
public:
	[[nodiscard]] EvEnergyAdapter(EnergyInfoPortPtr const energyInfoport) noexcept;
	//Delete copy constructor which prohibits copy-construct, assigning, move-construct and moving
	EvEnergyAdapter(const EvEnergyAdapter& other) noexcept = delete;
	virtual ~EvEnergyAdapter() = default;

	//IEvEnergyAdapter overrides
	virtual [[nodiscard]] String ToString() const noexcept override;

private:
	[[nodiscard]] KWhUnit CalculatekWh() const noexcept;
	EnergyInfoPortPtr _EnergyInfoPort;
};