#include <iostream>			 // used to access items for i/o
#include <ctype.h>			// used for sqrt
using namespace std;       // used to access cin and cout


int main()		// header for main program function

{		// open function body 

	char letter;	 // input to store results
	int answer;		// input for results

	cout << "Please enter a uppercase or lowercase letter =  " << endl;		// inform the user to enter a alphabetical character
	cin >> letter;		// store character

	answer = islower(letter);	 // define what the answer is using the islower library function
	cout << " = " << answer << endl;				// display results

	return 0;	// return zero to os - all ok

}		// close function body