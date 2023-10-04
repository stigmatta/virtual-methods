#pragma once
#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;
class Ship :public Transport
{
	string ship_type;
	unsigned int length, width,lift_capacity;
public:
	Ship();
	Ship(string fuel, string model, float max_speed, unsigned int wheels, string ship_type, unsigned int length, unsigned int width, unsigned int lift_capacity);
	string getShipType();
	unsigned int getLength();
	unsigned int getWidth();
	unsigned int getLiftCapacity();
	void setShipType(string ship_type);
	void setLength(unsigned int length);
	void setWidth(unsigned int width);
	void setLiftCapacity(unsigned int lift_capacity);
	void init();
	void print();
};

