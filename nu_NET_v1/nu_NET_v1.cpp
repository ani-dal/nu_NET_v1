// nu_NET_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <thread>
#include <ctime>

#include "Network.hpp"
#include<HiTime>

int main()
{
	srand(time(NULL));
	uint8_t x = rand() % 100;
	
	h_clock::startTimer();
	nu_Net::Network net(-x,2,3);
	unsigned int processor_count = std::thread::hardware_concurrency();
	std::cout << "Processors: "<<processor_count << "\n";
	std::cout << h_clock::clock_micro() << "us\n";
	std::cin.get();
	return 0;
}

