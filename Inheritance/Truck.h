#include <iostream>
using namespace std;


#ifndef TRUCK_H
#define TRUCK_H



class Truck : Vehicle
{
private:
	int towingCapacity = 100;
public:
	void displayInfo();
	int getTowingCapacity();
	void setTowingCapacity(int);

};

int Truck::getTowingCapacity()
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int newTowingCapacity)
{
	towingCapacity = newTowingCapacity;
}

void Truck::displayInfo()
{
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Towing Capacity: " << towingCapacity << endl;
}






#endif 

#pragma once
