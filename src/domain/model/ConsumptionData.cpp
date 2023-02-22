#pragma once
#include "pch.h"
#include "ConsumptionData.h"

[[nodiscard]] UInt ConsumptionData::MiliAmps() const noexcept
{
	return _MilliAmps;
}

[[nodiscard]] UInt ConsumptionData::Volt() const noexcept
{
	return _Volt;
}
[[nodiscard]] UInt ConsumptionData::ElapsedSeconds() const noexcept
{
	return _ElapsedSeconds;
}

void ConsumptionData::MiliAmps(UInt const& value) noexcept
{
	_MilliAmps = value;
}

void ConsumptionData::Volt(UInt const& value) noexcept
{
	_Volt = value;
}

void ConsumptionData::ElapsedSeconds(UInt const& value) noexcept
{
	_ElapsedSeconds = value;
}