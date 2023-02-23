#pragma once
#include "pch.h"

//Ev consumption adapter interface
class IEvEnergyAdapter {
public:
	virtual [[nodiscard]] String ToString() const noexcept = 0;
};
