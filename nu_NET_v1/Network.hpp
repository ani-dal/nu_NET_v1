#pragma once
#include <iostream>
#include <vector>
#include "Layer.hpp"
namespace nu_Net {

	class Network {
	
		uint8_t _x,_p,_q;
		std::vector<Layer *> layers;
		public:
			Network(uint8_t, uint8_t, uint8_t);
			
	};
}
