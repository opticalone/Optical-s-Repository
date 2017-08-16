#include <iostream>
#include "func.h"
#include <cmath>

// DECLARATION: Hey compiler, this thing that doesn't exist yet will probably exist somewhere else.

// DEFINITION: Hey compiler, this is the actual thing.

int main()
{
	int numA = 1;
	int numB = 2;

	std::cout << "Sum: " << sum(numA, numB);
}

// Compilation phase: one translation unit per source file : also called the object file
// Linking phase: that finds signatures and connects them with definitions