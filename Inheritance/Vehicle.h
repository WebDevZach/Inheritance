#include <iostream>
using namespace std;


#ifndef VEHICLE_H
#define VEHICLE_H



class Vehicle
{
private:
	string manufacturer = "yo mamas";
	int year = 21;
public:
	void displayInfo();

};

void Vehicle::displayInfo()
{
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear: " << year;
}





#endif 

