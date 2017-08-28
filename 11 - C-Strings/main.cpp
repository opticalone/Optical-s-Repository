#include <iostream>
#include <cstring>
using namespace std;

struct Player
{
	char name[80];
};


void addStrings(char dst[], int size, char src1[], char src2[])
{
	//cpoies data from src 1 into dst bffer
	strcpy_s(dst, size, src1);
	//concatenates from src2 into dst buffer
	strcat_s(dst, size, src2);

	//result should be src1+src2


}

void dosomething(int x)
{
	x += 10;
}
void dosomething2(int &x)
{
	x += 10;
}

void main()
{
	
	
	//definition
	char buffer[80];

	//instantiate
	char cstring[] = "Potato.";
	char buffer2[80] = { 0 };

	//assignment - put data in to variable
	

	strcpy_s(buffer, "string");

	//length
	int length = strlen(buffer);

	//concatenation
	strcat_s(buffer , cstring);


	int result = strcmp(buffer, cstring);
	cout << result;
	
	dosomething(result);
	dosomething2(result);

	cout << result; 

	system("pause");
}