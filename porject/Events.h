#pragma once
#include <windows.h>
struct Event
{
	char quest[80];
	char opti1[80];
	char opti2[80];
	int left,right;



};

int doEvent(Event event);
void blink();

void ColorPicker(int color);

void TimedPause(int millisec);

void DelayText(int millisec, char word[]);

void DelayTextWithSkip(int millisec, char word[]);


void test(int x, int y);

