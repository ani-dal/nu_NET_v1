#include "Neuron.hpp"
#include "Activation.hpp"



nu_Net::Neuron::Neuron(uint8_t n){
	std::cout << "Created Neuron\n";
	_n = n;
	if (SIGMOID(_n) >= 0.5) {
		std::cout << "Active\n";
	}
	else {
		std::cout << "Incative\n";
		std::cout << _n << "\n";
	}
}