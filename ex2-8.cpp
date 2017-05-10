/*
Q - Write a program to generate the product of the numbers in the range [1, 10).
A - See below.
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
	{
	int y = 1;	

	for(int x = 1; x < 10; x++)
	{
		y = y * x;
		cout << y << endl;
	}
	return 0;
}
