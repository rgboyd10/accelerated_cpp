/*
Q - Write a program that asks the user to enter two numbers and tells the user which number is larger than the other.
A - see below.
*/

#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main()
{
	cout << "Please enter a number: " << endl;
	int x;
	cin >> x;

	cout << "Please enter a second number: " << endl;
	int y;
	cin >> y;

	if(x > y)
	{
		cout << x << " is greater than " << y << "." << endl;
	}
	else
	{
		cout << y << " is greater than " << x << "." << endl;
	}
	return 0;
}
