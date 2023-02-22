#pragma once
#include "pch.h"

//Default consumption adapter interface
class IConsumedEnergyAdapter {
public:
	virtual [[nodiscard]] String ToString() const noexcept = 0;
};