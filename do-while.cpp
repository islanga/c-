#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int iRoll, iNoOfRolls = 0;
	srand(time(0));
	do
	{
		iRoll = rand() % 6 + 1;
		iNoOfRolls++;
	} while(iRoll != 6);

	cout << iNoOfRolls;
}