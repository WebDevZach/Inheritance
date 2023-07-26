#include <iostream>
using namespace std;


#ifndef CAR_H
#define CAR_H



class Car : public Vehicle
{
private:
	int doors;
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
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}




#endif 

