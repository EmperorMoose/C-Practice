//stdio.h is needed for running in visual studio and codelite
#include <stdio.h>
//iosteam handles input/output
#include <iostream>
using namespace std;

int main()
{
	int numberOfLanguages;
	
	//this line is an output. cout starts the output, << designates the string to print, \n is a newline operator
	cout << "Hello reader. \n"
		 << "Welcome to C++. \n";
		
	cout << "How many programming languages have you used?";
	//cin is an input operator. takes user input and stores it in the variable designated by the >>
	cin >> numberOfLanguages;
	
	if(numberOfLanguages < 1)
		cout << "Read the preface. You may prefer \n"
			 << "a more elementary book by the same auther. \n";
	else
		cout << "Enjoy the book. \n";
	
	return 0;
}
