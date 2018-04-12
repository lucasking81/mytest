#include "test_chrono.h"
#include <chrono>
#include <iostream>

void RunTest()
{
	auto start = std::chrono::system_clock::now();
	// do something...
	auto end = std::chrono::system_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "»¨·ÑÁË"
		<< double(duration.count()) * std::chrono::microseconds::period::num / std::chrono::microseconds::period::den
		<< "Ãë" << std::endl;
}

