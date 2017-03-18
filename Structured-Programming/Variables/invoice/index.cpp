#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declarations
	int iNo;
	double dUnitPr, dPriceExTax, dCustPrice, dTax, bfTax;
	double dTaxPerc = 0.0;

	// Entry of quantity and unit price
	cout << "Specify quantity and unit price and tax percent : ";

	// Assign the input to the following variables
	cin >> iNo >> dUnitPr >> dTaxPerc;

	// Calculations. First the price without tax
	dPriceExTax = dUnitPr * iNo;

	// Deduct 10% before tax
	bfTax = (dPriceExTax * 10.0 / 100);
	dPriceExTax = dPriceExTax - bfTax;

	// then the tax amount
	dTax = dPriceExTax * dTaxPerc / 100;

	// and finally the customer price
	dCustPrice = dPriceExTax + dTax;

	// Output
	cout << endl << "INVOICE";
	cout << endl << "=======" << endl;
	cout << "Quantity:        " << setw(5) << iNo << endl;
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "Price per unit:" << setw(8) << dUnitPr << endl;
	cout << "Total price: " << setw(8) << dCustPrice << endl;
	cout << "Tax: " << setw(8) << dTax << endl;
	cout << "Total Discount : " << setw(5) << bfTax + dTax << endl;
}