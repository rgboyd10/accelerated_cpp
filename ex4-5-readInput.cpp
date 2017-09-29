/*
Q - Write a function that reads words from an input stream and stores them in a vector.  Use that function both to write programs that count the number of words in the input and to count how many times each word occurred.
*/

//function that reads words from and input stream and stores them in a vector.

#include <iomanip>
#include <iostream>
#include <ios>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

vector <string> read_Input(vector <string>  userinput)
{
  vector <string> userinput_vector;
  string x;
  while(cin >> x)
    {
      userinput_vector.push_back(x);
    }
  
  return userinput_vector;
}
