#pragma once
#include <string>
#include <iostream>
#include <format>
#include <cmath>


//forward declarations
struct ConsumptionData;
class IEnergyInfoPort;
class IEvEnergyAdapter;
class IEnergyAdapter;

using String = std::string;
using UInt = uint32_t;
using KWhUnit = double;

using EnergyInfoPortPtr = std::shared_ptr<IEnergyInfoPort>;
using EvEnergyInfoAdapterPtr = std::shared_ptr<IEvEnergyAdapter>;
using EnergyInfoAdapterPtr = std::shared_ptr<IEnergyAdapter>;

template <typename T>
std::shared_ptr<T> CreateInstance(T* p) {
	return std::shared_ptr<T>(p);
}
