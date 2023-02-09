#pragma once
#include "pch.h"

class ConsumptionData
{
public:
	friend class EnergyInfo;

	ConsumptionData() noexcept = default;
	ConsumptionData(const ConsumptionData& other) noexcept = default;
	ConsumptionData(ConsumptionData&& other) noexcept = default;

private:
	ConsumptionData(UInt miliAmpere, UInt volt, UInt elapsedSeconds) :
		_MilliAmps{ miliAmpere },
		_Volt{ volt },
		_ElapsedSeconds{ elapsedSeconds } {}

	UInt _MilliAmps{ 0U };
	UInt _Volt{ 0U };
	UInt _ElapsedSeconds{ 0U };

public:
	UInt MiliAmps() const;
	UInt Volt() const;
	UInt ElapsedSeconds() const;

private:
	void MiliAmps(UInt const& value);
	void Volt(UInt const& value);
	void ElapsedSeconds(UInt const& value);
};