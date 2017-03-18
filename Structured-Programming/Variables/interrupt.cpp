#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double dNo;
	while (1 == 1)
	{
		cout << "Enter a number ";
		cin >> dNo;
		if (dNo <= 0)
			break;
		cout << "The square root of the number is " << sqrt(dNo) << endl;
	}
}