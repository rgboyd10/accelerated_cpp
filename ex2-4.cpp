/*
<<<<<<< dev
Q - The framing program writes the mostly blank lines that separates the borders from the greeting one character at a time.  Change the program so that it writes all the psaces needed in a single output expression.
A - 
=======
Q - The framing program writes the mostly blank lines that separates the borders from the greeting one character at a time.  Change the program so that it writes all the spaces needed in a single output expression.
A - See below.
>>>>>>> master
*/

#include <iostream>
#include <string>

  //say what standard-library names we use
  using std::cin;
  using std::endl;
  using std::cout;
  using std::string;

int main()
{
  //ask for the person's name
  cout << "Please enter your first name: ";

  //read the name
  string name;
  cin >> name;

  //build the message that we intend to write
  const string greeting = "Hello, " + name + "!";

  //the number of blanks surrounding the greeting
  const int pad = 1;

  //the number of rows and columns to write
  const int rows = pad * 2 + 3;
  const string::size_type cols = greeting.size() + pad * 2 + 2;
<<<<<<< dev

=======
  const string::size_type blanks = greeting.size();
  
>>>>>>> master
  //write a blank line to separate the output from the input
  cout << endl;

  //write rows rows of output
  //invariant: we have written r rows so far
  for(int r = 0;  r != rows; ++r)
    {
      string::size_type c = 0;

      //invariant: we have written c characters so far in the current view
      while (c != cols)
<<<<<<< dev
	{
=======
	  {
>>>>>>> master
	  //is it time to write the greeting?
	  if(r == pad + 1 && c == pad +1)
	    {
	      cout << greeting;
	      c += greeting.size();
	    }
	  else
	    {
	      //are we on the border?
	      if(r == 0 || r == rows -1 ||
		 c == 0 || c == cols -1)
		{
		  cout << "*";
		}
<<<<<<< dev
	      else
		{
		cout << " ";
		}
=======
	      else if(r == 1 && c == 1) //test this when you get g++ back on your linux machine.
		{ 
		cout << blanks;
		}
		  else
		  {
		  //do nothing? find syntax for this;
			  ;
		  }
>>>>>>> master
	      ++c;
	    }
	}
      cout << endl;
    }
  return 0;
}
<<<<<<< dev

=======
>>>>>>> master
