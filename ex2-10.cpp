/*
Q - Explain each of the uses of std:: in the following program: 
A -
The first use of std:: in 'using std::cout' is incorrect because this should have been declared before the method was declared, not in the body like it currently is.  The second use  wouldn't work because we didn't declare #include <iostream>.
*/

int main()
{
        int k = 0;
        while (k != 10) //invariant: we have written k asterisks so far
        {
                using std::cout;
                cout << "*";
                ++k;
        }
	std::cout << std::endl;	//std:: is required here
}
