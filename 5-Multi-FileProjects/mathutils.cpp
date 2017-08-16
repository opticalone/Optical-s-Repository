#include <iostream>
#include "mathutils.h"

int min(int a, int b)
{
	if ( a <  b)
	{
		return a;
	}
	else if ( a >  b)
	{
		return b;
	}
}
int max(int a, int b)
{
	if (a >  b)
	{
		return a;
	}
	else if (a <  b)
	{
		return b;
	}
}
int clamp(int lower, int upper, int value)
{
	if (value < 3)
	{
		return lower;
	}
	if (value > 45)
	{
		return upper;
	}

}
int dist(int x1, int y1, int x2, int y2)
{
	int travel = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return travel;
}


// min(12,23)

// a = 12, b = 23

//int main()
//{
//	int min;
//	{
//		if(a > b)
//	}
//	int max;
//	int clamp;
//	{
//		
//	}
//
//
//}