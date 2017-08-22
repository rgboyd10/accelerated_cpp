/*
Q - Write a program to count how many times a distinct word appears in its input.  
*/

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
  string space = " ";
  string userinput;
  vector <string> wordVector;

  cout << "Please enter whatever you want followed by. When you are finished, enter end of file (Ctrl-d)." << endl;
  while(cin >> userinput)
    {
      wordVector.push_back(userinput); 
      cout << userinput << endl;
    }
  double numWords = wordVector.size();
  cout << "The number of distinct words is "  << numWords << "." << endl;
}

  //Improvement idea - compare the input to a dictionary of words to check for real words.
