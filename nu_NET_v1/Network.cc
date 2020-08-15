#include "Network.hpp"

//#include "Activation.h"


nu_Net::Network::Network(uint8_t x, uint8_t p, uint8_t q)
{
	
	std::cout << "Created Network\n";
	_x = x;
	_p = p;
	_q = q;
	for (int i = 0; i <= _p; i++) {
		layers.push_back(new Layer(_x, _q));
	}
	
}