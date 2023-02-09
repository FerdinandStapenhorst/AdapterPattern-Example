#pragma once
#include "pch.h"
#include "ConsumptionData.h"

UInt ConsumptionData::MiliAmps() const
{
	return _MilliAmps;
}

UInt ConsumptionData::Volt() const {
	return _Volt;
}
UInt ConsumptionData::ElapsedSeconds() const {
	return _ElapsedSeconds;
}

void ConsumptionData::MiliAmps(UInt const& value)
{
	_MilliAmps = value;
}

void ConsumptionData::Volt(UInt const& value)
{
	_Volt = value;
}

void ConsumptionData::ElapsedSeconds(UInt const& value)
{
	_ElapsedSeconds = value;
}