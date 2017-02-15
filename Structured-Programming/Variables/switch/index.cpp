#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "Enter a letter";
	if(cin >> a)
	{
		switch(a)
		{
			case 'A':
				cout << "Excellent Result";
			break;
			default:
				cout << "You need to repeat the class";
			break;
		}
	}
	else
	{
		cout << "You loser, try again";
		cin.clear();
		cin.get();
	}
}