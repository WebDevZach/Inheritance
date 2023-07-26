#include <iostream>
using namespace std;


#ifndef TRUCK_H
#define TRUCK_H



class Truck : Vehicle
{
private:
	int towingCapacity;
public:
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






#endif 

#pragma once
