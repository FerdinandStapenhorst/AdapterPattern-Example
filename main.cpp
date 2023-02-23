#pragma once
//***************************************************
//********  Example of the Adapter Pattern  *********
//***************************************************

#include "pch.h"
#include "EnergyConsumptionService.h"
#include "EvEnergyAdapter.h"
#include "EnergyAdapter.h"

int main()
{
	//Instance of the EnergyInfo port
	auto energyInfoPort = CreateInstance(new EnergyConsumptionService);

	//It returns an ConsumptionData object that has three separate elements:milli ampere, volt and elapsed seconds
	auto consumptionData = energyInfoPort->ConsumedEnergy();

	//If we want to get the consumed energy in the detail string, we use the EnergyAdapter Adapter
	auto energyInfoAdapter = CreateInstance(new EnergyAdapter(energyInfoPort));
	std::cout << energyInfoAdapter->ToString() << "\n" << std::endl;

	//If we want to get the consumed energy in kWh, we use the EvEnergyAdapter Adapter
	auto evEnergyInfoAdapter = CreateInstance(new EvEnergyAdapter(energyInfoPort));
	std::cout << evEnergyInfoAdapter->ToString() << "\n" << std::endl;
}