#pragma once
#include <string>
#include <iostream>
#include <format>
#include <cmath>

//forward declarations
class ConsumptionData;
class EvConsumptionData;
class IEnergyInfo;
class IEvConsumedEnergy;

using String = std::string;
using UInt = uint32_t;
using KWhUnit = double;
using IEnergyInfoPtr = std::shared_ptr<IEnergyInfo>;
using IEvConsumedEnergyPtr = std::shared_ptr<IEvConsumedEnergy>;

template <typename T>
std::shared_ptr<T> CreateInstance(T* p) {
	return std::shared_ptr<T>(p);
}
