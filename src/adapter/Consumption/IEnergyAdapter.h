#pragma once
#include "pch.h"

//Default consumption adapter interface
class IEnergyAdapter {
public:
	virtual [[nodiscard]] String ToString() const noexcept = 0;
};