#include <iostream>

#include "square.h"

int main(int argc, char** argv) {
	double var = 36.6;
	std::cout << "[IN]: " << var << '\n';
	std::cout << "[OUT]: " << square(var) << std::endl;


	std::vector<int> vec { 3, -4, 2, -8, 15, 267 };
	
	std::cout << "[IN]: ";
	for (auto n : vec) {
		std::cout << n << ' ';
	}
	std::cout << std::endl;

	std::cout << "[OUT]: ";
	for (auto n : square(vec)) {
		std::cout << n << ' ';
	}
	std::cout << std::endl;

	return 0;
}