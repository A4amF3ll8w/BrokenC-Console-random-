#include <iostream>			// used to access items for i/o
using namespace std;		// used to access cin and cout

int main()		// header for main program function

{		// open function body 

	double Pounds, Shillings, Pence;	//input		

	cout << "Please Enter Pounds Amount:";		// amount entered
	cin >> Pounds;		//store amount

	cout << "Please Enter Shillings Amount:";	// amount entered
	cin >> Shillings;		//store amount

	cout << "Please Enter Pence Amount:";	// amount entered
	cin >> Pence;		// store amount

	Pounds = Pounds + (Shillings / 20) + (Pence / 20 / 12);		// multiply value

	cout << "Decimal Pounds = " << Pounds << '\n';		// display results

	return 0;	// return zero to os - all ok

}		// close function body