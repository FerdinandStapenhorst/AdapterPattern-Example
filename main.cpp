#pragma once
//***************************************************
//********  Example of the Adapter Pattern  *********
//***************************************************

#include "pch.h"
#include "EnergyConsumptionService.h"
#include "EvEnergyInfoAdapter.h"
#include "EnergyInfoAdapter.h"


int main()
{
	//Instance of the EnergyInfoAdapter port
	auto energyInfoPort = CreateInstance(new EnergyConsumptionService);
	//It returns an ConsumptionData object that has three separate elements:milli ampere, volt and elapsed seconds
	auto consumptionData = energyInfoPort->ConsumedEnergy();

	//If we want to get the consumed energy in the detail string, we use the EnergyInfoAdapter Adapter
	auto energyInfoAdapter = CreateInstance(new EnergyInfoAdapter(energyInfoPort));
	std::cout << energyInfoAdapter->ToString() << "\n" << std::endl;

	//If we want to get the consumed energy in kWh, we use the EvEnergyInfoAdapter Adapter
	auto evEnergyInfoAdapter = CreateInstance(new EvEnergyInfoAdapter(energyInfoPort));
	std::cout << evEnergyInfoAdapter->ToString() << "\n" << std::endl;
}