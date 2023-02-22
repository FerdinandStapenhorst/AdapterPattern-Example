#pragma once
#include "pch.h"

class ConsumptionData
{
public:
	friend class EnergyConsumptionService;

	[[nodiscard]] ConsumptionData() noexcept = default;
	[[nodiscard]] ConsumptionData(const ConsumptionData& other) noexcept = default;
	[[nodiscard]] ConsumptionData(ConsumptionData&& other) noexcept = default;

private:
	ConsumptionData(UInt miliAmpere, UInt volt, UInt elapsedSeconds) noexcept :
		_MilliAmps{ miliAmpere },
		_Volt{ volt },
		_ElapsedSeconds{ elapsedSeconds } {}

	UInt _MilliAmps{ 0U };
	UInt _Volt{ 0U };
	UInt _ElapsedSeconds{ 0U };

public:
	[[nodiscard]] UInt MiliAmps() const noexcept;
	[[nodiscard]] UInt Volt() const noexcept;
	[[nodiscard]] UInt ElapsedSeconds() const noexcept;

private:
	void MiliAmps(UInt const& value) noexcept;
	void Volt(UInt const& value) noexcept;
	void ElapsedSeconds(UInt const& value) noexcept;
};