#include <iostream>
using namespace std;

int main()
{
	double cem, pem, price;

	cout << "Enter Current electricity meter : ";
	cin >> cem;

	cout << "Enter Previous electricity meter : ";
	cin >> pem;

	cout << "Enter Price kWh : ";
	cin >> price;

	cout << ((cem / pem) * price);
}