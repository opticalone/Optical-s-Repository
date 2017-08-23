#include <iostream>
#include <string>
#include "player.h"


using namespace std;

void main()
{
	
	
	
	string playerName;
	Player stats;
	char c; 



	cout << "Fahblay." << endl;
	cout << " " << endl;
	cout << "Welcome to Fahblay." << endl;
	cout << " " << endl;
	cout << "This is a noble text based adventure of good and evil." << endl;
	cout << " " << endl;
	cout << "What is your name great adventurer? " << endl;
	cin >> playerName;
	cout << "" << endl;
	cout << "Truly the name of nobility! " << playerName << ", you will have to make decisions." << endl;
	cout << "" << endl;
	system("pause");
	cout << "Your choices will determine your fate." << endl;
	cout << "Heres your first one!" << endl;
	system("pause");
	cout << "You wake up in a house." << endl;
	cout << "" << endl;
	cout << "As your eyes open you start to scan the room." << endl;
	cout << "" << endl;
	cout << "You see an old man in the corner on a stool. " << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Watching." << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Waiting." << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Would you like coffee or tea?" << endl;
	cout << "For coffee press a" << endl; 
	cout << "For tea press b" << endl;
	cin >> c;
	
	switch (c) {
	case 'a':
		stats.pStr++;
		cout << "you gained a strength point!";
			break;
	
	case 'b':
		stats.pDef++;
		cout << "you gained a strength point!";
		break;
	default:
		cout << "Thats not an option!" << endl;
		cout << "The wizard smacks you." << endl;
		break;
	}

	
	cout << "" << endl; 
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "so." << endl;
	system("pause");



}