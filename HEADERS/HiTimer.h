#pragma once
#include <iostream>
#include <chrono>
#include "HiTimer.h"


class Timer 
{
	public:
		Timer()
		{
			start = std::chrono::high_resolution_clock::now();
			
		}

		int clock_nano()
		{
			end = std::chrono::high_resolution_clock::now();
			auto nano_duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

			//std::cout << nano_duration.count() << "\n";
			 
			return (int)nano_duration.count();
		}

		int clock_micro()
		{
			end = std::chrono::high_resolution_clock::now();
			auto micro_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			//std::cout << micro_duration.count() << "\n";
			return (int)micro_duration.count();
		}

		int clock_milli()
		{
			end = std::chrono::high_resolution_clock::now();
			auto milli_duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
			//std::cout << milli_duration.count() << "\n";
			return (int)milli_duration.count();
		}

		~Timer() 
		{
		}
	
	private:
		std::chrono::time_point<std::chrono::steady_clock> start, end;
		std::chrono::duration<float> duration;

};