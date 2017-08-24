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
  string decision;
  double grade;

  //read in the student's names
  while(cin)
    {
      cout << "Please enter the student's name and hit enter. If you are finished enter student's names and grades, hit Ctrl-d." << endl;
      cin >> name;
      students_names.push_back(name);
      
      cout << "Please enter the student's grade and hit enter. If you are finished enter student's names and grades, hit Ctrl-d." << endl;
      cin >> grade;
      students_grades.push_back(grade);

      cout << "Would you like to continue entering students and grades? y/n" << endl;
      cin >> decision; 
      if(decision == "n")
	{
	  break;
	}
      
    }
  
  //list out the student's and their corresponding grades
      cout << "Please see the student's names and grades below." << endl;
      for(int y = 0; y < students_names.size(); y++)
	{
	  cout << students_names[y] << " || " << students_grades[y] << endl;
	}
      return 0;
}
