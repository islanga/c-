#include <iostream>
using namespace std;

int main() 
{
	double temp[5], dbltemp[5];
	int iSum = 0, i, dAvg;

	int iNo[5] = {23, 12, 15, 19, 21};
	temp[1] = 12.5;
	temp[2] = 10.7;
	temp[3] = 13.1;
	temp[4] = 11.4;
	temp[5] = 12.1;

	for(i = 1; i <= 5; i++)
	{
		dbltemp[i] = temp[i];
		iSum += temp[i];
	}

	dAvg = iSum / 5;
	cout << iSum;
	cout << dAvg;
}