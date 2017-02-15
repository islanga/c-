#include <iostream>
using namespace std;

int main()
{
	int dTotal, dUnitPrice = 78, iNo = 0;

	cout << "Specify quantity: ";
	if (cin >> iNo)
		dTotal = iNo * dUnitPrice;
	else
	{
		cout << "Input error";
		cin.clear();
		cin.get();
	}
}