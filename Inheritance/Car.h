#include <iostream>
using namespace std;


#ifndef CAR_H
#define CAR_H



class Car : Vehicle
{
private:
	int doors = 4;
public:
	int getDoors();
	void setDoors(int);
	void displayInfo();
};
int Car::getDoors()
{
	return doors;
}

void Car::setDoors(int newDoors)
{
	doors = newDoors;
}

void Car::displayInfo()
{

	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Doors: " << doors << endl;
}




#endif 

