#include <iostream>

#include <chrono>
#include <thread>
#include "time.h"
using namespace std;

void PauseText()
{
	this_thread::sleep_for(chrono::milliseconds(2000));
}

int main()
{
	int str = 1;
	int xp = 0;
	int sleeps = 0;
	int vit = 0;
	int armor = 0;
	int weapon = 0;
	int strDino = 0;
	int sleepsDino = 0;
	int vitDino = 0;
	int armorDino = 0;
	int weaponDino = 0;
	int points = 1;
	int pointsDino = 7;
	int time = 0;
	char In;
	char p;
	char i;
	char m;

	
	std::cout << "DINO FIGHT" << std::endl;
	system("pause");
	std::cout << "How strong are you? scale 1 - 10" << std::endl;
	std::cin >> str;
	if (points >= 1)
	{
		points = str + 1;
	}
	
	std::cout << "Your points: " << points << std::endl;
	system("pause");
//strength
	std::cout << "what would you take into battle?" << std::endl;
	std::cout << "P or I or M" << std::endl;
	std::cin >> In;
	if (In == 'p' || In == 'P')
	{
		std::cout << "You picked a sack of Potatoes!" << std::endl;
		points--;
	}
	else if (In == 'i' || In == 'I')
	{
		std::cout << "You picked an invisibility cape!" << std::endl;
	}
	else if (In == 'm' || In == 'M')
	{
		std::cout << "You picked The Mango Blade!" << std::endl;
		points++ ;
	}
	std::cout << "Your points: " << points << std::endl;
	system("pause");
//weapon

	std::cout << "How many battles have you fought?" << std::endl;
	std::cin >> xp;
	std::cout << "Wow! You've fought " << xp << " battles!?" << std::endl;
	points ++ ;
	std::cout << "Your points: " << points << std::endl;


//battles
	std::cout << "Did you get enough sleep (y/n)?" << std::endl;
	std::cin >> In;
	if (In == 'y' || In == 'Y')
	{
		std::cout << "Lucky. You got a point!" << std::endl;
		points++;
	}
	else if (In == 'n' || In == 'N')
	{
		std::cout << "Unlucky. You lost a point! Go grab a coffee!" << std::endl;
		points--;
	}
	std::cout << "Your points: " << points << std::endl;
	system("pause");

//sleep
	std::cout << "How much vitamin C do you get daily (mg)?" << std::endl;
	std::cin >> vit;
	if (vit >= 75)
	{
		std::cout << "Wow! Such health! Congrats on your point!" << std::endl;
		points++;
	}
	else if (vit <= 75)
	{
		std::cout << "Get some OJ! You have lost a point!" << std::endl;
		points--;
	}
	system("pause");

//vits
	std::cout << "Calculating totals..." << std::endl;
	PauseText();
	std::cout << "..." << std::endl;
	PauseText();
	std::cout << "..." << std::endl;
	PauseText();
	std::cout << "..." << std::endl;
	PauseText();
	
	if (points > pointsDino)
	{
		std::cout << "You're a Winner!" << std::endl;
	}
	else
	{
		std::cout << "Sucks! You are not cooler than a Dino" << std::endl;
	}
	std::cout << " " << std::endl;
	std::cout << "Your points: "<< points << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Dino's points; " << pointsDino << std::endl;
	std::cout << " " << std::endl;

	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	//happy?
	bool isHappy = true;

	if (isHappy)
	{
		std::cout << "happy?" << std::endl;
	}
	else
	{
		std::cout << "such sad" << std::endl;
	}


	int happiness = 50;
	std::cout << "enter a number between 1 and 100" << std::endl;
	std::cin >> happiness;
	std::cout << "you entered " << happiness << std::endl;

	
	if (happiness > 75)
	{
		std::cout << "super happy" << std::endl;
	}

	else if(happiness > 1) 
	{
		std::cout << "not v happy" << std::endl;
	}
	
	system("pause");
// happiness over

	bool age = true;
	int years;
	std::cout << "Enter your age" << std::endl;
	std::cin >> years;
	std::cout << "you entered " << years << std::endl;

	if (years >= 50)
	{
		std::cout << "AARP?" << std::endl;
	}
	
	if (years >= 65)
	{
		std::cout << "retire yo" << std::endl;
	}

	else if (years < 18)
	{
		std::cout << "not adult" << std::endl;
	}
//years over

	int nu1;
	int nu2;
	int nu3;


//round 2

	std::cout << "enter your first number" << std::endl;
	std::cin >> nu1;
	std::cout << "enter your second number" << std::endl;
	std::cin >> nu2;
	std::cout << "enter your third number" << std::endl;
	std::cin >> nu3;

	if (nu1 < nu2 && nu1 < nu3)
	{
		std::cout << nu1;
	}
	else if (nu2 < nu1 && nu2 < nu3)
	{
		std::cout << nu2;
	}
	else if (nu3 < nu1 && nu3 < nu2)
	{
		std::cout << nu3;
	}
	system("pause");
//even or odd
	int odd;
	int even;
	int num;
	std::cout << "enter a number between 1 and 20" << std::endl;
	std::cin >> num;
	std::cout << "your number is: " << num << std::endl;
	if (num = 1)
	{
		std::cout << "your number is odd" << std::endl;
	}
	else
	{
		std::cout << "your number is even" << std::endl;
	}
	system("pause");

//clamp
	std::cout << "enter a number between 1 and 50" << std::endl;
	std::cin >> num;
	if (num > 30)
	{
		std::cout << "30" << std::endl;
	}
	if (num < 15)
	{
		std::cout << "15" << std::endl;
	}
	system("pause");
//calc


	int num1;
	int num2;
	int sum;
	char Input;
	


	std::cout << "enter your first value" << std::endl;
	std::cin >> num1;
	std::cout << "  enter your second value" << std::endl;
	std::cin >> num2;
	std::cout << "your first value: " << num1 << ". your second value: "<< num2 << std::endl;
	std::cout << "For Addition Press a: " << std::endl;
	std::cout << "For subtraction Press b: " << std::endl;
	std::cout << "For Multiplication Press c: " << std::endl;
	std::cout << "For Division Press d: " << std::endl;
	std::cin >> Input;

	if (Input == 'a' || Input == 'A')
	{
		sum = num1 + num2;
	}
	if (Input == 'b' || Input == 'B')
	{
		sum = num1 + num2;
	}if (Input == 'c' || Input == 'C')
	{
		sum = num1 + num2;
	}if (Input == 'd' || Input == 'D')
	{
		sum = num1 + num2;
	}
	std::cout << sum << std::endl;
	system("pause");
}
