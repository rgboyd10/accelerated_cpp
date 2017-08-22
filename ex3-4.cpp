/*
Q - Write a program to report the length of the longest and shortest string in its input.
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
  string space = " ";
  string user_input;
  vector <string> word_vector;

  cout << "Please enter whatever you want followed by. When you are finished, enter end of file (Ctrl-d)." << endl;
  while(cin >> user_input)
    {
      word_vector.push_back(user_input); 
      cout << user_input << endl;
    }

  string max_word;
  double max_word_size;
  string min_word;
  double min_word_size;
  
  for(int x = 0; x <= word_vector.size(); x++)
    {

      if(word_vector[x].size() > word_vector[x-1].size())
	{
	  max_word = word_vector[x];
	  max_word_size = word_vector[x].size();
	}

      else if(word_vector[x].size() < word_vector[x-1].size())
	{
	  min_word = word_vector[x];
	  min_word_size = word_vector[x].size();
	}
    }

  cout << "The longest word is " << max_word << " and it's size is " << max_word_size << "." << endl;
  cout << "The shortest word is " << min_word << " and it's size is " << min_word_size << "." << endl;
}
