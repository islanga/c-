#include <iostream>
using namespace std;

int main()
{
	int i, iLimit, iSum = 0;
	cout << "Enter limit: ";
	cin  << iLimit;
	for (i = 1; i <= iLimit; i++)
		iSum += 1;
	cout << "The sum = " << iSum << endl;
}