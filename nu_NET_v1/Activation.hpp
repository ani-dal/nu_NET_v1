#pragma once
#include <math.h>

namespace nu_Net {

	float SIGMOID(uint8_t x)
	{
		return 1 / (1 + exp(-x)); // f:R=>(0,1)
	}
	float TANH(uint8_t x)
	{
		return tanh(x); // f:R=>(-1,1)
	}
	float F_SIGMOID(uint8_t x)
	{
		return x / (1 + abs(x)); // f:R=>(0,1)
	}
	bool activate = false;
}
