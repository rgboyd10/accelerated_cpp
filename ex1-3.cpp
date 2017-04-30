//Q - Is the following program valid?  If so, what does it do? If not, why not?
//A - Yes because each variable s is contained within its own scope. The output is
// a string
// another string

#include <iostream>
#include <string>

int main()
{
	{
	 	const std::string s = "a string";
		std::cout << s << std::endl;
	}

	{
		const std::string s = "another string";
		std::cout << s << std::endl; 
	}
		return 0;
}
