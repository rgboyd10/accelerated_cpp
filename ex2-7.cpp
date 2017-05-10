/*
Q - Wrie a program to count down from 10 to -5.
A - see below
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
	//declare variables
	int x = 10;
	int y = -5;

	while (x >= y)
	{
		cout << x << endl;
		x--;
	}

return 0;
}
