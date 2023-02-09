#pragma once
//***************************************************
//********  Example of the Adapter Pattern  *********
//***************************************************

#include "pch.h"
#include "EnergyInfo.h"
#include "EvEnergyInfo.h"

int main()
{
	//Instance of the EnergyInfo port which returns the energy in three separate elements:
	//milli ampere, volt and elapsed seconds
	IEnergyInfoPtr energyInfoPort = CreateInstance(new EnergyInfo);
	std::cout << energyInfoPort->ToString() << "\n" << std::endl;

	//Instance of the Adapter injecting the port interface
	//We now can get the consumed energy in kWh
	IEvConsumedEnergyPtr evEnergyInfoAdapter = CreateInstance(new EvEnergyInfo(energyInfoPort));
	std::cout << evEnergyInfoAdapter->ToString() << "\n" << std::endl;
}