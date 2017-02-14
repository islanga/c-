#include <iostream>
using namespace std;

int main()
{
	float dTaxpercent = 0.25;
	short iNo         = 5;
	short dUnitprice  = 12;
	const double d    = 0.26;

	double dToBePaid  = dUnitprice + dUnitprice * dTaxpercent;
	
	iNo += 10;

	cout << "Variables Declarration " << iNo;
	return 0;
}