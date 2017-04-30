/*
Q - Is this program valid?  If so, what does it do?  If not, say why not, and rewrite it to be valid.
A - This program is not valid because  variable x will not compile in the second to last line since it is out of scope when called for.
*/

#include <iostream>
#include <string>

int main()
{
	{
		std::string s = "a string";
	{
		std::string x = s + ", really";
		std::cout << s << std::endl;
	}
		std::cout << x << std::endl;
	}
		return 0;
}
