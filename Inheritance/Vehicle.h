#include <iostream>
using namespace std;


#ifndef VEHICLE_H
#define VEHICLE_H



class Vehicle
{
private:
	string manufacturer = "jimbob";
	int year = 2199;
public:
	virtual void displayInfo();
	string getManufacturer();
	void setManufacturer(string);
	int getYear();
	void setYear(int);
};

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

void Vehicle::setManufacturer(string newManufacturer)
{
	manufacturer = newManufacturer;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::setYear(int newYear)
{
	year = newYear;
}




#endif 

