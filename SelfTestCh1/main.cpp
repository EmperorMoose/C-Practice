#include <stdio.h>
#include <iostream>
using namespace std;

int main( )
{
	int mainInput = 0;
	while(mainInput != 99)
	{
		cout << "Which question would you like to test? Enter 4-8, 99 to quit";
		cin >> mainInput;
		switch (mainInput)
		{
			case 4:
				questionIV();
			case 5:
				questionV();
			case 6:
				questionVI();
			case 7:
				questionVII():
			case 8:
				questionVIII();
		}
		if(mainInput != 4,5,6,7,8)
			"Please enter 4-8 or 99 to quit";
	}
}


void questionIV()
{
	int x,y;
	cout << "Please enter and x, y, and a z value";
	cin >> x >> y >> z;
	
	cout << 3*x << "\n";
	cout << (3*x) + y << "\n";
	cout << ((3*x) + y)/y << "\n";
	cout << ((3*x) + y)/y << "\n";
	cout << ((3*x) + y)/z+2 << "\n";
}
