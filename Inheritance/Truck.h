#include <iostream>
using namespace std;


#ifndef TRUCK_H
#define TRUCK_H



class Truck : public Vehicle
{
private:
	int towingCapacity;
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
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}






#endif 

#pragma once
