/*
Q - What happens if we rewrite the previous program to allow values up to but not including 1000 but neglect to change the arguments to setw? Rewrite the program to be more robust in the face of changes that allow i to grow without adjusting the setw arguments.
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
  
  for(int x = 0; x < 1000; x++)
    {
      cout << setw(2) << x << " || " << x*x << endl;
    }
  return 0;
}
