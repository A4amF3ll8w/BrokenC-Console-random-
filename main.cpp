#include <iostream>
using namespace std;


int main()

{

	for (int count = 0; count<20; count++)
	{
		for (int x = 20 - count; x > 0; x--) cout << " ";
		for (int z = 0; z<2 * count + 1; z++) cout << "X";

		cout << endl;
	}

	return 0;
}