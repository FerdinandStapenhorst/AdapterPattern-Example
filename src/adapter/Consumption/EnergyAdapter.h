#pragma once
#include "pch.h"
#include "IEnergyAdapter.h"

class EnergyAdapter : public IEnergyAdapter {
public:
	[[nodiscard]] EnergyAdapter(EnergyInfoPortPtr const energyInfoport) noexcept;
	//Delete copy constructor which prohibits copy-construct, assigning, move-construct and moving
	EnergyAdapter(const EnergyAdapter& other) noexcept = delete;
	virtual ~EnergyAdapter() = default;

	//IEnergyAdapter overrides
	virtual [[nodiscard]] String ToString() const noexcept override;

private:
	EnergyInfoPortPtr _EnergyInfoPort;
};