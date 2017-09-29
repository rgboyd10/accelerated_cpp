/*
Q - Write a function that reads words from an input stream and stores them in a vector.  Use that function both to write programs that count the number of words in the input and to count how many times each word occurred.
*/

//count the number of words in the input
#include <iomanip>
#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include "ex4-5-readInput.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main()
{
  //variables
 vector <string> userinput;
 int number_of_words;

 //get user input
 cout << "Please enter a word and hit enter after each word.  If you are finished entering words, hit Ctrl-D (EOF)" << endl;
 userinput = read_Input(userinput);

 //find number of words
 number_of_words = userinput.size();
 
cout<< "There are " << number_of_words << " total words in your input."  << endl;
}
