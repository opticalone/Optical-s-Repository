#include <iostream>
#include <string>
#include <time.h>
#include "player.h"
#include "Events.h"
#include <windows.h>
#include <thread>
#include <chrono>


Player stats;
using namespace std;

bool check(int c) 
{
	if (c == 1 || c == 2)
		return true;
	else
		return false;
}


int doEvent(Event event) 
{
	if (event.JustText == 1)
	{
		DelayTextWithSkip(40, event.quest);
		return event.left;
	}
	else
	{
		cout << endl;
		//cout << event.quest << endl;
		DelayTextWithSkip(20, event.quest);

		if (strcmp(event.opti1, "") != 0)
		{
			
			//cout << "1)" << event.opti1 << endl;
			cout << "1) ";
			DelayTextWithSkip(20, event.opti1);
		}

		if (strcmp(event.opti2, "") != 0)
		{
			//cout << "1)" << event.opti1 << endl;
			
			cout << "2) ";
			DelayTextWithSkip(20, event.opti2);
		}
		bool Check = true;

		int input = 0;
		while (true)
		{
			DelayTextWithSkip(5, "Make your choice: ");

			cin >> input;

			Check = check(input);

			//if (cin.fail())
			//{
			//	cin.clear();
			//	cin.ignore(80, '\n');
			//}
			//else break;
			/*system("cls");*/


			if (input == 1 && Check == true)
			{
				ColorPicker(3);
				stats.pKarma += 50;
				return event.left;
			}
			if (input == 2 && Check == true)
			{
				ColorPicker(11);
				stats.pKarma -= 50;
				return event.right;
				
			}
		}
	}
	
	
}

void blink()
{
	system("color 2");
	Sleep(50);
	system("color 1");
	Sleep(50);
	system("color 3");
	Sleep(50);
	system("color 4");
	Sleep(50);
	system("color 5");
	Sleep(50);
	system("color 6");
	Sleep(50);
	system("color 7");
	Sleep(50);
	system("color 8");
	Sleep(50);
	system("color 9");
	Sleep(50);
	system("color A");
	Sleep(50);
	system("color B");
	Sleep(50);
	system("color C");
	Sleep(50);
	system("color D");
	Sleep(50);
	system("color E");
	Sleep(50);
	system("color F");
	Sleep(50);
	system("color 6");
	Sleep(50);
}

void ColorPicker(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void TimedPause(int millisec)
{
	Sleep(millisec);
}
void DelayText(int millisec, char word[])
{
	for (int i = 0; i < strlen(word); i++)
	{
		cout << word[i];
		//this_thread::sleep_for(chrono::milliseconds(millisec));
		Sleep(millisec);
	}

}
void DelayTextWithSkip(int millisec, char word[])
{
	for (int i = 0; i < strlen(word); i++)
	{
		/*int rando = rand() % 200 + 1;
		ColorPicker(rando)*/;
		cout << word[i];
		Sleep(millisec);
	}
	cout << endl;
}

void test(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		ColorPicker(i);
		DelayText(1, "test");
		std::cout << i << endl;
	}
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



