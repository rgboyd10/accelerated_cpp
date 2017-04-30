/*
Q - Change the framing program so that it writes its greeting with no separation from the frame.
A - see below.
*/
#include <iostream>
#include <string>

int main()
{
        std::cout << "Please enter your first name: ";
        std::string name;
        std::cin >> name;

        //build the message that we intend to write
        const std::string greeting = "Hello, " + name +  "!";

        //build the first and fifth lines of the output
        const std::string first(greeting.size() + 4, '*');

        //write it all
        std::cout << std::endl;
        std::cout << first << std::endl;
//        std::cout << second << std::endl;
        std::cout << "* " << greeting << " *" << std::endl;
//        std::cout << second << std::endl;
        std::cout << first << std::endl;

        return 0;
}

