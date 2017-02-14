// function example
#include <iostream>
using namespace std;

int addition(int a, int b)
{
	int r;
	r = a + b;
	
	return r;
}

void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int subtraction(int a, int b)
{
	int r;
	r = a - b;
	return r;
}

// Functions with no type
void printmessage()
{
	cout << "I'm a function!" << endl;
}

// Recursivity
long factorial(long a)
{
	if (a > 1)
		return (a * factorial(a-1));
	else
		return 1;
}

int main()
{
	int z;
	long number = 9;
	z = addition(5, 5);
	cout << "The result is " << z << endl;

	int x = 1, y = 3, p = 7;
	duplicate(x, y, p);
	cout << "x=" << x << ", y=" << y << ", z=" << p << endl;
	cout << subtraction(7, 2) << endl;
	printmessage();
	cout << number << "! " << factorial(number);

	return 0;
}