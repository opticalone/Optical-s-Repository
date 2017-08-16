#include "day.h"
using namespace std;
#include<iostream>

void dayGreeting(int day, int month, int year)
{
	cout << "hey the year is " << year << "the month is: " << month << "the day is: " << endl;
}

void timeGreeting(int hour, int minute)
{
	cout << "you late?" << hour << minute << endl;

}

bool leapYear(int years)
{
	if (years % 4 == 0)
	{
		if (years % 100 == 0)
		{
			return years % 400 == 0;
		}
		else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	

