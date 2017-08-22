#include <iostream>

//void printNum(int nums[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << nums[i] << std::endl;
//	}
//}

int findIndex(int numbers[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == value)
		{
			
			return i;
			
		}
	}
	return -1;

}


int main()
{
	

	int ar[] = { 5,8,6,9,4 };
	std::cout << findIndex(ar, 5, 9) << std::endl;
	
	////declare and define int arrays
	//int numbers[5];

	////individually do each element
	//numbers[0] = 3;
	//numbers[1] = 5;
	//numbers[2] = 7;
	//numbers[3] = 9;
	//numbers[4] = 12;

	


	////initalize each with for loop
	//for (int i = 0; i < 5; ++i)
	//{
	//	numbers[i] = 0;
	//}
	////initalize using iniotalizer list

	//int numlist[]{ 0 , 0 , 0 , 0 , 0 };

	////acess arrays using indicies
	//numbers[0] = 5; //asign to array at index (position)
	//std::cout << numbers[0] << std::endl;

	////iterating over array
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << numbers[i]<< std::endl;
	//}


	////assign one to every other element
	//for (int i = 0; i < 5; i += 2)
	//{
	//	numbers[i] = 1;
	//}

	////passing arrays to function
	//std::cout << "test" << std::endl;
	//printNum(numbers, 5);

	system("pause");
}
