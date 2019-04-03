#pragma once
#include <iostream>
struct Capital {
	char title[20];
	int population;

	void print() {
		std::cout << title << " " << population << std::endl;
	}
};