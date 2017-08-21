
#include <iostream>



void grid(int width, int height)
	{
		for (int i = 1; i < height * width; ++i)
		{
			std::cout << "x";
			if (i % width == 0)
			{
				std::cout << "/n";
					
			}
		}
		grid(width, height);

	}



	
	/*void EvenOrOdd(int start, int end)
	{
		for (int i = start; i <= end; ++1)
		{
			if (i % 2 == 0)
			{
				std::cout << "even" << std::endl;
			}
			else
			{
				std::cout << "odd" << std::endl;
			}
		}
	}*/
	////WHILE============================================
	//	int iter = 0;
	//	while (iter < 11)
	//	{
	//		std::cout << iter << std::endl;
	//		iter++;
	//	}
	//
	//
	////FOR=============================================
	//
	//	// init
	//	// condition
	//	// expr
	//	for (int i = 0; i < 11; ++i)
	//	{
	//		std::cout << i << std::endl;
	//	}
	//
	////do-while=========================================
	//	int j = 0;
	//	do
	//	{
	//		std::cout << j << std::endl;
	//		++j;
	//	} while (j < 11);
	//	//
	////simple input validation =========================
	//	int ui = -1;
	//	
	//	do
	//	{
	//		std::cout << "gimme number 'tween 1 and 5" << std::endl; //4
	//		std::cin >> ui;
	//	} while (ui < 1 || ui > 5);
	//	
	//
	//	std::cout << "yey" << std::endl;
	//
	////CLASSWORK=========================================
	//
	//
	//
	//	
	//// CLOSED == CLOSED == CLOSED == CLOSED == CLOSED == 
	//// 1. FROM 1 to 100 ================================
	//	
	//	//system("pause");
	//	
	//	for (int m = 0; m < 101; ++m)
	//	{
	//		std::cout << m << std::endl;
	//	}
	//	system("pause");
	//	
	//// 2. FROM 100 to 1 ================================
	//	
	//	
	//	for (int p = 100; p > 0; --p)
	//	{
	//		std::cout << p << std::endl;
	//	}
	//	system("pause");
	//
	//
	// 3. FROM 1994 to 2017 ============================
	/*int year = 1994;

	do
	{
		std::cout << year << std::endl;
		++year;
	} while (year <= 2017);




	system("pause");*/

	//// 3. TOP 3 POSITIVE NUMBERS =======================
	//
	//
	//// OPEN == OPEN == OPEN == OPEN == OPEN == OPEN ==== 
	//
	//1. FROM X TO Y ===================================

	//int x;
	//int y;

	//void printXY(int x, int y);
	//{
	//	for (int i = x; i <= y; ++i)
	//	{
	//		std::cout << i << std::endl;
	//	}
	//}


	//int pLarge(int qty);
	//{
	//	int largest = INT_MIN;
	//	for (int i = 0; i < qty; ++i;)
	//	{
	//		std::cout << num ? << std::endl;
	//		int input = 0;
	//		std::cin >> input;
	//		if (input > largest)
	//		{
	//			return largest;
	//		}


	//	}
	//}



