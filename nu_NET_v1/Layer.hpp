#pragma once
#include"Neuron.hpp"
#include <iostream>
#include<vector>

namespace nu_Net {

	class Layer {
		uint8_t _l,_p;
		std::vector<Neuron*>neurons;
		public:
		
			Layer(uint8_t, uint8_t);
			
	};
}