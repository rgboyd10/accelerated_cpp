/*
Q- Suppose we wish to find the median of a collection of values.  Assume that we read some of the values so far, and that we have no idea how many values remain to be read.  Prove that we cannot afford to discard any of the values that we have read.  Hint: One proof strategy is to assume that we can discard a value, and then find values for the unread - and therefore unknown - part of our collection that would cause the median to be the value that we discarded.

A-You can't afford to discard any of the values because the median could be one of those values.
*/

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
  //declare a vector with some previously read in values
  vector<double> previous_values;

  //insert in previous values that are unknown to the user
  double a = 23;
  double b = 99;
  double c = 1209;
  double d = 3820;
  double e = 2;

  previous_values.push_back(a);
  previous_values.push_back(b);
  previous_values.push_back(c);
  previous_values.push_back(d);
  previous_values.push_back(e);
  
  //read in values from the user to use in computing the median
  cout <<"Please provide some additional values followed by end-of-file: ";
  double x;
    while(cin >> x)
      {
	previous_values.push_back(x);
      }

  //checking that the user entered values
  typedef vector<double>::size_type vec_sz;
  vec_sz size = previous_values.size();
  if(size == 0)
    {
      cout << endl << "Your must enter values. Please try again.";
      return 1;
    }
  
  //sort the values
  sort(previous_values.begin(),previous_values.end());  

  //compute the median values
  vec_sz mid = size/2;
  double median;
  median = size % 2 == 0 ? (previous_values[mid] + previous_values[mid-1]) / 2
    : previous_values[mid];

  cout << "The median of your values and some unknown values is " << median << endl;
}
