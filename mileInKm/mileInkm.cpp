#include <iostream>
using namespace std;

int main() {
	const int ftInMile = 5280;
	const double kmInMile = 1.609344;
	double dMile, dFt, dKm, dM;
	
	cout << "Distance in miles and feet" << endl;

	cout << "Miles: " << endl;
	cin >> dMile;

	cout << "Feet: " << endl;
	cin >> dFt;

	double distMile = dMile + (double)dFt / ftInMile;
	double distKm = distMile * kmInMile;

	dKm = (int)distKm;
	dM = (int)((distKm-dKm)*1000);

	cout << "Distance in kilometers and meters" << endl;
	cout << "Kilometers: " << dKm << endl;
	cout << "Meters: " << dM << endl;

	return 0;
}