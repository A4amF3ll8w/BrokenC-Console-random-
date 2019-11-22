#include <iostream>		// used to access items for i/o
using namespace std;	// used to access cin and cout

int main()		 // header for main program function

{		// open function body 

	char dummychar;		//input		
	float a, b, c, d, sum1, sum2;	//input		

	cout << "Please Enter the First fraction = ";	// fraction entered
	cin >> a >> dummychar >> b;		// store fraction

	cout << "Please Enter the Second fraction = ";	// fraction entered
	cin >> c >> dummychar >> d;		// store fraction

	sum1 = (a*d) + (b*c);  // multiply values
	sum2 = b*d;		// multiply value

	cout << "Sum = " << sum1 << "/" << sum2 << endl;	// display results

	return 0;	// return zero to os - all ok

}		// close function body