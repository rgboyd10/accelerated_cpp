/*
Q -Now change your squares program to use double values instead of ints.  Use manipulators to manage the output so that the values line up in columns.
*/

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::string;
using std::vector;
using std::setw;

int main()
{
  double b = 2;
  
  //header
  cout << "Squares of numbers 0 to 100" << endl;
  cout << "---------------------------" << endl;
  
  for(double x = 0; x < 1000; x++)
    {
      cout << setw(2) << x << " || " << x*x << endl;
    }
  return 0;
}
