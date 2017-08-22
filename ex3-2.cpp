/*
Q - Write a program to compute  and print the quartiles (that is, the quarter of the numbers with the largest values, the next highest quarter, and so on) of a set of integers.
A - 
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
  vector<int> previous_values;

  int a = 23;
  int b = 99;
  int c = 1209;
  int d = 3820;
  int e = 2;

  previous_values.push_back(a);
  previous_values.push_back(b);
  previous_values.push_back(c);
  previous_values.push_back(d);
  previous_values.push_back(e);

  for(int x = 0; x < previous_values.size(); x++)
    {
      cout << "The value is " << previous_values[x] << endl;
      cout << "---------------------------" << endl;
      cout << "The 1st quartile of " << previous_values[x] << " is " << 0.25 *  previous_values[x] << "." << endl;
      cout << "The 2nd quartile of " << previous_values[x] << " is " << 0.50 *  previous_values[x] << "." << endl;
      cout << "The 3rd quartile of " << previous_values[x] << " is " << 0.75 *  previous_values[x] << "." << endl;
      cout << "The last quartile of " << previous_values[x] << " is " << 1.00 *  previous_values[x] << "." << endl;
      cout << endl;
    }
  
}
