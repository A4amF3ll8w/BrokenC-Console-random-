#include <iostream>		  // used to access items for i/o
#include <iomanip>		 // used for setfill/setw
#include <stdlib.h>		// used for setiosflags
using namespace std;   // used to access cin and cout


int main()		// header for main program function

{		// open function body 

	cout << "Last name     First name      Street address        Town        State" << endl;		 // display header
	cout << "----------------------------------------------------------------------" << endl;		// space before results

	cout << setiosflags(ios::left)		 // set certian flags
		<< setw(15) << "Jones" << setw(15) << "Bernard" << setw(20) << "109 Pine Lane" << setw(15) << "Littletown" << setw(2) << "MI" << endl;		// display informatin in the spaces with set values

	cout << setiosflags(ios::left)		// set certian flags
		<< setw(15) << "O'Brian" << setw(15) << "Coleen" << setw(20) << "42 E. 99th Ave." << setw(15) << "BigCity" << setw(2) << "NY" << endl;		// display informatin in the spaces with set values

	cout << setiosflags(ios::left)		// set certian flags
		<< setw(15) << "Wong" << setw(15) << "Harry" << setw(20) << "121-A Alabama St." << setw(15) << "Lakeville" << setw(2) << "IL" << endl;		// display informatin in the spaces with set values

	return 0;	// return zero to os - all ok

}		// close function body