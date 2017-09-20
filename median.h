//source file for the median function

//copmute the median of a vector<double>
//note that calling this functin copies the entire argument vector

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;
using std::domain_error;


double median(vector<double> vec)
{
  typedef vector<double>::size_type vec_sz;
  vec_sz size = vec.size();
  
  if(size == 0)
    throw domain_error("median of an empty vector");

  sort(vec.begin(), vec.end());

  vec_sz mid = size/2;

  return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}
