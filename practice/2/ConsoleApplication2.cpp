#include <iostream>
using namespace std;

//Prints n-firsts numbers

int main()
{	
	int count, factor = 2;
	cout << "Enter the range: " << endl;
	cin >> count;
	int border = count * factor;

	while (border)
	{
		if (border % 2 == 1)
		{
			cout << border << endl;
		}

		border--;
	}

	return 0;
}