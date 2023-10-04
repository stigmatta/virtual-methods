#pragma once
#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;
class Automobile : public Transport
{
	string license_plate,transmission_type;
	unsigned int engine_capacity;
public:
	Automobile();
	Automobile(string fuel, string model, float max_speed, unsigned int wheels, string license_plate, string transmission_type, unsigned int engine_capacity);
	string getLicensePlate();
	string getTransmissionType();
	unsigned int getEngineCapacity();
	void setLicencePlate(string license_plate);
	void setTransmissionType(string transmission_type);
	void setEngineCapacity(unsigned int engine_capacity);
	void init();
	void print();
};

