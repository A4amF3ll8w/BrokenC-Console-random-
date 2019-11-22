//
//

#include<iostream>
#include<iomanip>
using namespace std;

int main()

{

	int a, amount, year;
	float rate, end;
	char con;

	cout << "Please Enter The Initial Amount:";
	cin >> amount;

	cout << "Please Enter The Number Of Years:";
	cin >> year;

	cout << " Please Enter The Interest Rate:";
	cin >> rate;
	cout << endl;

	for (a = 1; a <= year; a = a + 1)
	{	// This is the BLOCK of the loop
		end = amount + (amount*(rate / 100));
		cout << "At the end of " << a << " year:" << end << " Dollars " << "\n";
		amount = end;
		cout << endl;
	}

	cout << " Would You Like To Do Another One? (y/n):";
	cin >> con;
	while (con != 'n');

	return 0;

}