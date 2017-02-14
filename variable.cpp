// initialization of variables

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// declaring variables:
	int a = 5;		// initial value: 5
	int b(3);		// initial value: 3
	int c(2);		// initial value: 2
	int result;		// initial value undetermined
	
	string mystring;
	
	mystring = "This is a string";

	a = a + b;
	result = a - c;

	// print out the result:
	cout << mystring << endl;
	cout << result << endl;
	
	// terminate the program:
	return 0;
}