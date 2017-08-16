//rounbd#include <iostream>




#include<isostream>

int main()
{

	int age = 23;
	int nameone = 6;
	int nametwo = 5;
	int namethr = nameone + nametwo;
	 

	std::cout << "i am " << age << "years old" << std::endl;
	age = age + 1;
	std::cout << "next year i'll be " << age << " years old." << std::endl;

//You?

	std::cout << "How about you? (enter your age)" << std::endl;
	std::cin >> age;
	std::cout << "there's no way youre " << age << ". Most " << age << " year-olds are way smarter." << std::endl;
	int agemo = age * 525600;
	std::cout << "Wow you're " << agemo << " minutes old." << std::endl;

	
//Using Arithmetic Operators on Floating-Point Variables
	system("pause");

	float apple = 1.1;
	float pear = 2.2;
	float peach = apple + pear;

	std::cout << peach;

	system("pause");

//Storing User Input in Integer Variables

	int potato = 0;
	std::cout << "Potato?: " << std::endl;
	std::cin >> potato;
	std::cout << "Potato: "<< potato << std::endl;
	
	system("pause");


//Rectangles

	float rWidth = 0.0f;
	float rHeight = 0.0f;
	

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "enter height" << std::endl;
	std::cin >> rHeight;
	std::cout << "enter width" << std::endl;
	std::cin >> rWidth;
	std::cout << "H: " << rHeight << " , W: " << rWidth << std::endl;
float rArea = rWidth * rHeight;
	std::cout << "Area: " << rArea << std::endl;



	system("pause");

//Average
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	std::cout << "avg of 5)" << std::endl;
	std::cout << "enter first number" << std::endl;
	std::cin >> a;
	std::cout << "enter second number" << std::endl;
	std::cin >> b;
	std::cout << "enter third number" << std::endl;
	std::cin >> c;
	std::cout << "enter fourth number" << std::endl;
	std::cin >> d;
	std::cout << "enter fifth number" << std::endl;
	std::cin >> e;
	avg = (a + b + c + d + e) / 5;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	
	std::cout << "avg: " << avg << std::endl;

	system("pause");


//Number Swap
	int x;
	int y;
	std::cout << "enter x value" << std::endl;
	std::cin >> x;
	std::cout << "enter y value" << std::endl;
	std::cin >> y;
	x = x + y;
	y = x - y;
	x = x - y;
	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;
	system("pause");

//Conforming to conventions

	//int age;
	//int bulletCount;
	//float dogYears;
	//int qty;
	//float shieldValue;
	//float defenseMatrixCooldown;
	//int redArmorValue;
	//float redArmorRatio;
	//int happiness;
	//int gandhiAggression;


	//int age;
	//int bullet_count;
	//float dog_years;
	//int qty;
	//float shield_value;
	//float defense_matrix_cooldown;
	//int red_armor_value;
	//float red_armor_ratio;
	//int happiness;
	//int gandhi_aggression;

}