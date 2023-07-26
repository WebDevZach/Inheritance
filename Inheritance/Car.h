#include <iostream>
using namespace std;


#ifndef CAR_H
#define CAR_H



class Car : Vehicle
{
private:
	int doors;
public:
	int getDoors();
	void setDoors(int);

};
int Car::getDoors()
{
	return doors;
}

void Car::setDoors(int newDoors)
{
	doors = newDoors;
}





#endif 

