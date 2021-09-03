#include <iostream>
#include <cstdlib>
using namespace std;

double getDistMile() {
	double dist;

	cout << "Indicate distance in miles" << endl;
	cin >> dist;
	
	return dist;
}

double getDistKm(double dist) {
	double kmInMile = 1.609344;

	return dist * kmInMile;
}

int main() {
	double distMile = getDistMile();
	cout << "Distance in kilometers: " << getDistKm(distMile) << endl;

	return 0;
}
