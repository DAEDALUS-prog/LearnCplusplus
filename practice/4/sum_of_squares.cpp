#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int number, counter, sum = 0;

	cout << "Enter the range number: ";
	cin >> number;

	for (counter = 1; counter <= number; counter++)
	{
		sum += counter * counter;
	}

	cout << "Sum of squares number from 1 to " << number << ": " << sum << endl;

	system("pause");
	return 0;
}