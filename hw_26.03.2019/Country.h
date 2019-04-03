#pragma once
#include "Capital.h"

struct Country {
	char title[30];
	Capital Cap;
	void print() {
		std::cout << title << std::endl;
#ifdef CAPITAL
		Cap.print();
#endif
	}
};