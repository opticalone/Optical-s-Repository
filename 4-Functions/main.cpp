#include <iostream>
//
//
//
//
//
//SQUARES
int SquareOfNumbers(int a)
{
	int res = a * a;
	return res;
}

//Fractions

float fractionChange(int n , int d)
{
	float a = n;
	float b = d;
	return a /  b;
}


// function definitions
void AddToArrayValues(int ArrayVar[], int arrayLength)
{
		for (int i = 0; i < arrayLength; ++i)
		{
			ArrayVar[i] = ArrayVar[i] + 1;
		}

}

//ADDITION x3

int threeCombo(int x, int y, int z)
{
	return x+y+z;
}


void main() 
{

//--------------------------------------
//SQUARES


	int square;
	int a = 0;
	int SquareOfNumbers(int a);
	

	std::cout << "num?" << std::endl;
	std::cin >> a;
	int result = SquareOfNumbers(a);
	std::cout << result << std::endl;
	system("pause");

//--------------------------------------
//Fractions


	int n = 0;
	int d = 0;
	float decimal = 0.0f;
	

	std::cout << "numerator?" << std::endl;
	std::cin >> n;
	std::cout << "deominator?" << std::endl;
	std::cin >> d;
	decimal = fractionChange(n,d);
	std::cout << decimal << std::endl;
	system("pause");

//------------------------------------------
// function definitions
	int intArray[] = { 1,2,3,4,5 };
	std::cout << intArray[0] << "," << intArray[1] << std::endl;
	
	system("pause");
	
//------------------------------------------
// ADDITION x3

	int threeCombo(int x, int y, int z);
	int v = 0;
	int b = 0;
	int q = 0;

	
	std::cout << "first" << std::endl;
	std::cin >> v;
	std::cout << "second" << std::endl;
	std::cin >> b;
	std::cout << "third" << std::endl;
	std::cin >> q;
	std::cout << "end" << std::endl;
	int rr = v * b * q;
	std::cout << rr << std::endl;
	system("pause");
}

//=========================================================
//this is a concept i need to go over a couple times. 
//