#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age < 15)
		cout << "You'll got to stick to the bike some more time";
	else
		cout << "You are allowed to drive moped";
}