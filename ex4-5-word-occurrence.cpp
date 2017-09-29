/*
Q - Write a function that reads words from an input stream and stores them in a vector.  Use that function both to write programs that count the number of words in the input and to count how many times each word occurred.
*/

//count how many times each word occurred.

#include <iomanip>
#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include "ex4-5-readInput.cpp"

using std::setw;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
  //variables
  string x;
  vector<string> userinput_vector;
  int word_occurrence;
  
  cout << "Please enter a word or multiple words followed by Ctrl-D (EOF)" << endl;
  userinput_vector = read_Input(userinput_vector);

  for(int x = 0; x <= userinput_vector.size(); x++)
    {
      for(int y = 0; y <= userinput_vector.size(); y++)
	{
	  if(userinput_vector[x] == userinput_vector[y])
	    {
	      word_occurrence++;
	    }
	}
      cout << setw(2) << userinput_vector[x] << " || " << word_occurrence << endl;
      word_occurrence = 0;
    }
}
