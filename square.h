#pragma once

#include <vector>
#include <algorithm>

template<typename T>
T& square(T& a) {
	a *= a;

	return a;
}

template<typename U>
std::vector<U>& square(std::vector<U>& vec) {
	for_each(vec.begin(), vec.end(), [](auto& n) { n *= n; });

	return vec;
}