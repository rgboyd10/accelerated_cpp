/*
Q - Is this program valid?  What if we change }} to };} in the third line from the end?
A - yes this program is valid.  The nested variables are each in their own scope still.  Changing }} to };} would do nothing other than create an empty statement at the end of the first scope.
*/

#include <iostream>
#include <string>

int main()
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	

	{
		const std::string s = "another string";
		std::cout << s << std::endl;
	}
	}
	return 0;
}
