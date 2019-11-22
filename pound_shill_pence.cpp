#include <iostream>;		// used to access items for i/o
#include<iomanip> 
using namespace std;	// used to access cin and cout


int main()	//	header for main program function

{		// open function body 

	float Pounds, Shillings;	// input	
	double Amount, Amount2, Amount3, Pence;	// second input


	cout << "Please Enter First Amount: ";	 // amount entered
	cin >> Amount;	// store amount

	cout << "Please Enter Second Amount: ";
	cin >> Amount2;
	cout << endl;

	Amount2 = Amount2 + Amount;
	Pounds = int(Amount + Amount2);		 // pounds =
	Amount = Amount - Pounds;	// subtract amount entered from pounds 


	Amount3 = Amount + Amount2 * 20;	// multiply amount * 20
	Shillings = int(Amount3 + Amount2);	// shillings = 
	Amount3 = Amount3 + Amount2 - Shillings;	// value - shillings
	Pence = Amount3 + Amount2 * 12;	// multiply amount * 12

	cout << Pounds << " Pounds , " << Shillings << " Shillings , " << Pence << " Pence" << endl;	// display results

	return 0;		// return zero to os - all ok

}		// close function body