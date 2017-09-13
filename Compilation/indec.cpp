#pragma once
#include <iostream>
#include "globe.h"
#include "indec.h"


int counter = 0;

void inc()
{
	counter++;
	std::cout << counter << std::endl;
}
void dec()
{
	counter--;
	std::cout << counter << std::endl;
}

