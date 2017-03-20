#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price, quantity, sum;

	cout << "Enter gas quantity: ";
	cin >> quantity;

	cout << "Enter gas price: ";
	cin >> price;

	sum = price * quantity;

	cout << endl << "RECEIPT" << endl;
	cout << endl << "===============";
	cout << endl << "Volume " << setw(5) << quantity << " " << "l" << endl;
	cout << endl << "Litre price: " << setw(5) << price << " " << "kr/l" << endl;
	cout << endl << "---------------";
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << endl << "To be paid: " << setprecision(2) << sum << " " << "kr";
}