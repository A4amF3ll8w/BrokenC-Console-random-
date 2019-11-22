#include <iostream>			// used to access items for i/o
using namespace std;		// used to access cin and cout


int main()		// header for main program function

{		// open function body 

	float Ftemp;	// tempature for fahrenheit

	cout << "Please enter the Fahrenheit tempature";	// tempature entered
	cin >> Ftemp;	// store value

	float ctemp = (Ftemp - 32) * 5 / 9;		 // multiply values

	cout << "The equivalent in Celsius is: " << ctemp << '\n';		// display results

	return 0;	// return zero to os - all ok

}		// close function body