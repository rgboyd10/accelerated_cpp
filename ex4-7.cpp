/*
Q - Write a program to calculate the average of the numbers stored in a vector<double>.
*/
#include <iostream>
#include <vector>
#include <string>
#include <ios>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  //declare variables
  vector<double> numbers;
  double num;
  double average;
  double sum;
  double x;
  //ask the user to input numbers
  cout << "Please a number, followed by enter. When you are finished, hit Ctrl-D (EOF)." << endl;

  //read in the numbers from the user
  while(cin >> x)
    {
      numbers.push_back(x);
      sum += x;
    }

  //calculate the average of all of the numbers and store in a variable
  average = sum / numbers.size();
  
  //present the average to the end user
  cout << "The average is " << average << "." << endl;
}