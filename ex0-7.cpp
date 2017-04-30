/*
Q - Is this a valid program or not?
A - No because the forward slashes in between the comment structure are not preceded by a second forward slash.
*/

#include <iostream>
int main()
{
	/* This is a comment that extends over several lines
because it uses /* and */ as its starting and ending delimiters*/
	std::cout << "Does this work?" << std::endl;
	return 0;
}
