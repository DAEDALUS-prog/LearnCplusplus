#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main()
{
	int n = 100;
	double x = 1;
	double sum = 0, add = 1, count = 0;

	do {
		sum += add;
		count++;
		add *= x / count;
	} while (count <= n);

	cout << "Value: " << sum << endl;
	cout << "Controle value: " << exp(x) << endl;

	return 0;
}