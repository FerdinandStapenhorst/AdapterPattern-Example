#pragma once
#include "pch.h"

//Ev consumption adapter interface
class IEvConsumedEnergyAdapter {
public:
	virtual [[nodiscard]] String ToString() const noexcept = 0;
};
