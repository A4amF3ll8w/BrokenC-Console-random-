#include<iostream>		// used to access items for i/o
using namespace std;	// used to access cin and cout


int main() //header for main program function


{		// open function body 

	double value;	//input		

	cout << "Please enter the value";	// amount entered
	cin >> value;						// store amount

	cout << "$" << value << " = " << (value / 1.487) << " Britian's Currency" << endl;	// multiply value*euro	

	cout << "$" << value << " = " << (value / 0.172) << " France's Currency" << endl;	// multiply value*euro

	cout << "$" << value << " = " << (value / 0.584) << " Germany's Currency" << endl;	// multiply value*euro

	cout << "$" << value << " = " << (value / 0.00955) << " Japan's Currency" << endl;	// multiply value*yen

	return 0;		// return zero to os - all ok

}	// closy function body