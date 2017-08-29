#include <iostream>
#include <string>
#include <time.h>
#include "player.h"
#include "Events.h"
#include <windows.h>


Player stats;
using namespace std;


int doEvent(Event event) {
	
	
	cout << endl;
	cout << event.quest << endl;

	if (strcmp(event.opti1, "") != 0)
		cout << "1)" << event.opti1 << endl;
	if (strcmp(event.opti2, "") != 0)
		cout << "2)" << event.opti2 << endl;
	
	int input = 0;
	while (true)
	{
		cout << "Make your choice: " << endl;
		cin >> input; 
		
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(80, '\n');
		}
		else break;
	}
	/*system("cls");*/
	
	if (input == 1) return event.left;
	if (input == 2) return event.right;
		
}



	/*char c;
	switch (c) {

	case 'a':
		stats.pGoodness++;
		break;

	case 'b':
		stats.pGoodness--;
		break;

	default:
		cout << "Thats not an option!";
		cout << " Try again!" << endl;
		break;
	} return 0;*/



