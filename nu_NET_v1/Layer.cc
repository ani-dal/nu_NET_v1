
#include "Layer.hpp"



nu_Net::Layer::Layer(uint8_t l, uint8_t p){
	std::cout << "Created Layer\n";
	_l = l;
	_p = p;
	for (int i = 0; i <= _p; i++) {
		neurons.push_back(new Neuron(_l));
	}
}
