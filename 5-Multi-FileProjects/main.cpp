#include <iostream>
#include "func.h"
#include "mathutils.h"
#include <cmath>
#include "rng.h"
#include "day.h"
using namespace std;

// DECLARATION: Hey compiler, this thing that doesn't exist yet will probably exist somewhere else.

// DEFINITION: Hey compiler, this is the actual thing.

int main()
{
	seedRng(36);
	cout << rng() << endl;
	system("pause");
}

// Compilation phase: one translation unit per source file : also called the object file
// Linking phase: that finds signatures and connects them with definitions