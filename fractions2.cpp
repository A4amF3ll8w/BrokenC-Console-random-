#include <iostream>
#include<iomanip>		// used to access items for i/o
using namespace std;	// used to access cin and cout

int main()		 // header for main program function

{		// open function body 

	char op, con, dummychar;		//input		
	float a, b, c, d, sum;	//input		

	do {
		cout << "Please Enter the First Fraction = ";	//  entered
		cin >> a >> dummychar >> b;		// store 
		cout << "Please Enter the Second Fraction = ";
		cin >> c >> dummychar >> d;

		cout << "Please enter operator";
		cin >> op;


		if (op == '/');
		sum = (a*d) / (b*c);

		if (op == '*');
		sum = (a*c) / (b*d);

		if (op == '+');
		sum = (a*d) + (b*c) / (b*d);

		if (op == '-');
		sum = (a*d) - (b*c) / (b*d);


		cout << "Answer = " << sum << endl;

		cout << " Would You Like To Do Another One? (y/n):";
		cin >> con;

	} while (con != 'n');
}	// close function body