#pragma once
struct Event
{
	char quest[80];
	char opti1[80];
	char opti2[80];
	int left,right;



};

int doEvent(Event event);
