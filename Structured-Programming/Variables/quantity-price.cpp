#include <iostream>
using namespace std;

int main()
{
	int iNo;
	double dPrice;
	cout << "Specify quantity: ";
	cin >> iNo;
	cout << "Specify unit price: ";
	cin >> dPrice;
	cout << "You entered the quantity " << iNo << " and the price " << setw(8) << dPrice;
}