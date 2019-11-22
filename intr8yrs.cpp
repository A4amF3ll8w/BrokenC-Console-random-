#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
	char con;
	int i;
	float amount, rate, amount1;

	do {
		cout << "Please Enter The Initial Amount :";
		cin >> amount;

		cout << " Please Enter The Interest Rate :";
		cin >> rate;

		cout << "Please Enter The Final Amount :";
		cin >> amount1;

		i = 0;
		while (amount1 >= amount) { amount1 -= amount1*rate / 100; i++; }

		cout << "The Number Of Years It Will Take Is : " << i;
		cout << endl;

		cout << " Would You Like To Do Another One? (y/n):";
		cin >> con;

	} while (con != 'n');
}