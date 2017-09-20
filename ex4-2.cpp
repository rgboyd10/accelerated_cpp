/*
Q - Write a program to calculate the squares of int values up to 100.  The program should write two columns:  The first lists the value; the second contains the square of that value.  Use setw (described above) to manage the output so that values line up in columns.
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
  int b = 2;
  
  //header
  cout << "Squares of numbers 0 to 100" << endl;
  cout << "---------------------------" << endl;
  
  for(int x = 0; x <= 100; x++)
    {
      cout << setw(2) << x << " || " << x*x << endl;
    }
  return 0;
}
