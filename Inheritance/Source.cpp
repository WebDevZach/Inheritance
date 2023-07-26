/*
Zachary Leyes

7/24/2023

Inheritance

1202 201
*/

#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Vehicle vehicly;
	Car cary;
	Truck trucky;

	int year;
	string manufacturer;
	int doors;
	int towingCapacity;



	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	vehicly.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> year;
	vehicly.setYear(year);

	cout << "Vehicle Information" << endl;
	vehicly.displayInfo();
	cout << endl;


	cout << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cary.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> year;
	cary.setYear(year);

	cout << "Enter the number of doors: ";
	cin >> doors;
	cary.setDoors(doors);

	cout << "Vehicle Information" << endl;
	cary.displayInfo();
	cout << endl;


	cout << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	trucky.setManufacturer(manufacturer);

	cout << "Enter the year built: ";
	cin >> year;
	trucky.setYear(year);

	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	trucky.setTowingCapacity(towingCapacity);

	cout << "Vehicle Information" << endl;
	trucky.displayInfo();
	cout << endl;




	return 0;
}

