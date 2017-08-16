#include "rng.h"
#include <random>

void seedRng(int seed)
{
	srand(seed);
}

int rng()
{
	return rand() % 100 + 1;
}

int rngRange(int top, int bot)
{
	return rand() % top + bot;
}

bool rngb()
{
	return rand() % 1;
}

bool rngBchance(int chance)
{
	// chance 75
	int rando = rand() % 100 + 1;
	
	if (rando <= chance)
	{
		return true;
	}
	else {
		return false;
		}
	return (rando <= chance);
	
	
}
