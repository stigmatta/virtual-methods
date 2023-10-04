#pragma once
#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;
class Motorcycle : public Transport
{
	string engine_type, color, body_type;
public:
	Motorcycle();
	Motorcycle(string fuel, string model, float max_speed, unsigned int wheels, string engine_type,string color,string body_type);
	string getEngineType()const;
	string getColor()const;
	string getBodyType()const;
	void setEngineType(string engine_type);
	void setColor (string color);
	void setBodyType(string body_type);
	void init();
	void print()const;
};

