//  ______    _     _     _             
//  |  ___|  | |   | |   | |            
//  | |_ __ _| |__ | |__ | | __ _ _   _ 
//  |  _/ _` | '_ \| '_ \| |/ _` | | | |
//  | || (_| | | | | |_) | | (_| | |_| |
//  \_| \__,_|_| |_|_.__/|_|\__,_|\__, |
//                                 __/ |
//                                |___/
#include <iostream>
#include <string>
#include <time.h>
#include "player.h"
#include "Events.h"
#include <windows.h>
#include <thread>
#include <chrono>


using namespace std;
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
		this_thread::sleep_for(chrono::milliseconds(millisec));
		Sleep(millisec);
	}

}
void DelayTextWithSkip(int millisec, char word[])
{
	for (int i = 0; i < strlen(word); i++)
	{
		/*int rando = rand() % 15+ 1;
		ColorPicker(rando);*/
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

void main()
{
		string playerName;
		Player stats;
		test(1, 15);

	/*	ColorPicker(10);
		DelayTextWithSkip(20, "     ,d8888b        d8b       d8b       d8b                     ");                                   
		DelayTextWithSkip(20, "     88P'           ?88       ?88       88P                     ");
		DelayTextWithSkip(20, "  d888888P           88b       88b     d88                      ");
		DelayTextWithSkip(20, "    ?88'  d888b8b    888888b   888888b 888   d888b8b  ?88   d8P ");
		DelayTextWithSkip(20, "    88P  d8P' ?88    88P `?8b  88P `?8b?88  d8P' ?88  d88   88  ");
		DelayTextWithSkip(10, "   d88   88b  ,88b  d88   88P d88,  d88 88b 88b  ,88b ?8(  d88  ");
		DelayTextWithSkip(10, "  d88'   `?88P'`88bd88'   88bd88'`?88P'  88b`?88P'`88b`?88P'?8b ");
		DelayTextWithSkip(1, "                                                            )88");
		DelayTextWithSkip(1, "                                                          ,d8P");
		DelayTextWithSkip(1, "                                                       `?888P'");
    */
		ColorPicker(8);
		DelayTextWithSkip(20, "Welcome to Fahblay");
		cout << " " << endl;
		DelayTextWithSkip(50, "This is a text based adventure of good and...");
		ColorPicker(4);
		DelayTextWithSkip(300, "...EVIL");
		ColorPicker(8);
		cout << " " << endl;
		DelayTextWithSkip(20, "What is your name?");
		cin >> playerName;
		cout << "" << endl;
		DelayTextWithSkip(20, "We can't all have ringers I suppose.");
		cout << playerName;

		DelayTextWithSkip(20, ", you will have to make decisions.");
		cout << "" << endl;
		Sleep(3000);
		DelayTextWithSkip(20, "Your choices WILL determine your FATE.");
		
		cout << "" << endl;
		Sleep(3000);
		DelayTextWithSkip(20, "Here is your first one");
		
		cout << "" << endl;
		Sleep(3000);

		cout << "You wake up in a house." << endl;
		
		Sleep(2000);
		cout << "As your eyes open you start to scan the room." << endl;
		
		Sleep(2000);
		cout << "You see an old man in the corner on a stool. " << endl;
		Sleep(2000);
		cout << "" << endl;
		cout << "" << endl;
		cout << "Watching." << endl;
		Sleep(2000);
		cout << "" << endl;
		cout << "" << endl;
		cout << "Waiting." << endl;
		Sleep(2000);
		cout << "" << endl;
		cout << "" << endl;
		ColorPicker(5);
		


		//good track events
	Event events[100];
	events[0] = { "Would you like coffee or tea?", "Coffee", "Tea", 1 , 1 };
	
	events[1] = { "Does this hat make me look fat?", "I actually think it's a rather dashing hat!", "Yeah old man. You'd be fat wothout it.", 2 , 2 };
	events[2] = { "The cat seems to want you to follow, will you?", "no", "yes", 50 , 3 };
	events[3] = { "question3", "no", "yes", 0 , 4 };
	events[4] = { "question", "no", "yes", 0 , 1 };










	//evil track events
	events[50] = { "question", "no", "yes", 0 , 1 };

	int idx = 0;
	while (idx >= 0)
	{
		idx = doEvent(events[idx]);
	}




//	cout << "The old man nods as you walk out the door." << endl;
//	Sleep(1000);
//	cout << "You walk down a dusty path. It is warm. Summer is coming." << endl;
//	Sleep(1000);
//	cout << "You come across a cat in the road." << endl;
//	Sleep(1000);
//	cout << "The cat looks at you square in the eyes." << endl;
//	Sleep(3000);
//	cout << "Meow." << endl;
//	Sleep(2000);
//	cout << "Meow." << endl;
//	Sleep(1000);
//	cout << "Meow." << endl;
//	Sleep(1000);
//	cout << "He seems to want you to follow." << endl;
//	Sleep(1000);
//
//
//	cout << "a) Sure kitty!" << endl;
//	Sleep(1000);
//	cout << "b) Fuck you cat." << endl;
//	Sleep(1000);
//	cin >> e;
//
//	switch (e) {
//	case 'a':
//		stats.pGoodness += 100;
//		stats.PCoin++;
//		cout << "The cat leads you towards a small village through a clearing of trees." << endl;
//		break;
//
//	case 'b':
//		stats.pGoodness -=100;
//		cout << "The cat hisses loudly and runs off. Wow. Karma is just going to love you." << endl;
//		break;
//	default:
//		cout << "Thats not an option!" << endl;
//		cout << "A memory of the old man smacking you comes to mind. Try again!" << endl;
//		break;
//
//	}
//
//
	system("pause");



}