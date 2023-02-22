#pragma once
#include "pch.h"
#include "IConsumedEnergyAdapter.h"

class EnergyInfoAdapter : public IConsumedEnergyAdapter {
public:
	EnergyInfoAdapter() noexcept = delete;
	EnergyInfoAdapter(const EnergyInfoAdapter& other) noexcept = delete;
	EnergyInfoAdapter(EnergyInfoAdapter&& other) noexcept = delete;
	virtual ~EnergyInfoAdapter() = default;

	[[nodiscard]] EnergyInfoAdapter(EnergyInfoPortPtr const energyInfoport) noexcept;

	virtual [[nodiscard]] String ToString() const noexcept override;

private:
	EnergyInfoPortPtr _EnergyInfoPort;
};