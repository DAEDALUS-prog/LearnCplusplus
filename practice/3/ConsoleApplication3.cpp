#include <iostream>
using namespace std;

//Prints numbers that remain 3 when divided by 4
//(The number of numbers is entered by the user)

int main() 
{
	cout << "Enter the count: " << endl;
	int count, number = 1;
	cin >> count;

	while (count) {
		if (number % 4 == 3) 
		{
			cout << number << endl;
			count--;
		}
		number++;
	}


	return 0;
}