#pragma once
#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;
class Tramway:public Transport
{
	string tram_number;
	unsigned int length, width, passenger_capacity;
public:
	Tramway();
	Tramway(string fuel, string model, float max_speed, unsigned int wheels, string tram_number, unsigned int length, unsigned int width, unsigned int passenger_capacity);
	string getTramNumber();
	unsigned int getLength();
	unsigned int getWidth();
	unsigned int getPassengerCapacity();
	void setTramNumber(string tram_number);
	void setLength(unsigned int length);
	void setWidth(unsigned int width);
	void setPassengerCapacity(unsigned int passenger_capacity);
	void init();
	void print();
};

