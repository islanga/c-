#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int iRoll1, iRoll2, iCounter = 0;
	srand(time(0));
	do
	{
		iRoll1 = rand() % 6 + 1;
		iRoll2 = rand() % 6 + 1;
		iCounter++;
	} while (iRoll1 != iRoll2);
	
	cout << "The rolls were " << iRoll1 << endl;
	cout << "Number of attempts = " << iCounter << endl;
}