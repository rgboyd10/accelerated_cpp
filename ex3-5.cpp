/*
Q - Wite a program that will keep track of grades for several students at once.  The program could keep two vectors in sync: The first should hold the student's names, and the second the final grades that can be computed as input is read.  For now, you should assume a fixed number of homework grades.  We'll see in S4.1.3/56 how to handle a variable number of grades intermixed with student names.
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
  //declare variables
  vector <string> students_names;
  vector <double> students_grades;
  string name;
  double grade;

  //read in the student's names
  cout << "Please enter the student's name. When you are finished, enter Ctrl-d (end of file)." << endl;
  while(cin >> name)
    {
      cout << "Please enter the student's name. When you are finished, enter Ctrl-d (end of file)." << endl;
      students_names.push_back(name);
      cout << "You've entered " << name << "." << endl;
    }

  //read in the grades for each student
  while (cin >> grade && students_grades.size() <= students_names.size())
    {
      for(int x = 0; x <= students_names.size(); x++)
	{
	  cout << "Please enter the grade for " << students_names[x] << "When you are finished, enter Ctrl-d (end of file)." << endl;
	  students_grades.push_back(grade);
    }
    }
  
  //list out the student's and their corresponding grades
      cout << "Please see the student's names and grades below." << endl;
      for(int y = 0; y <= students_names.size(); y++)
	{
	  cout << students_names[y] << " || " << students_grades[y] << endl;
	}
  
}
