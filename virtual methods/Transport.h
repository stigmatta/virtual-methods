#pragma once
#include <iostream>
#include <string>
using namespace std;
class Transport
{
protected:
	string fuel,model;
	float max_speed;
	unsigned int wheels;
public:
	Transport();
	Transport(string fuel, string model, float max_speed, unsigned int wheels);
	string getFuel()const;
	string getModel()const;
	float getMaxSpeed()const;
	unsigned int getWheels()const;
	void setFuel(string fuel);
	void setModel(string model);
	void setMaxSpeed(float max_speed);
	void setWheels(unsigned int wheels);
	virtual void init();
	virtual void print()const;
};

