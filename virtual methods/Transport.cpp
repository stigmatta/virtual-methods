#include "Transport.h"
Transport::Transport()
{
	fuel = model = " ";
	max_speed = 0;
	wheels = 0;
}
Transport::Transport(string fuel, string model, float max_speed, unsigned int wheels) :fuel(fuel), model(model), max_speed(max_speed), wheels(wheels)
{
}
string Transport:: getFuel()
{
	return fuel;
}
string Transport:: getModel()
{
	return model;
}
float Transport:: getMaxSpeed()
{
	return max_speed;
}
unsigned int Transport::getWheels()
{
	return wheels;
}
void Transport:: setFuel(string fuel)
{
	this->fuel = fuel;
}
void Transport::setModel(string model)
{
	this->model = model;
}
void Transport::setMaxSpeed(float max_speed)
{
	this->max_speed = max_speed;
}
void Transport::setWheels(unsigned int wheels)
{
	this->wheels = wheels;
}
void Transport:: init()
{
	cout << "Type of the fuel: "<<endl;
	cin >> fuel;
	cout << "Model name: " << endl;
	cin >> model;
	cout << "Max speed: " << endl;
	cin >> max_speed;
	cout << "How many wheels: " << endl;
	cin >> wheels;
}
void Transport::print()
{
	cout << "Type of fuel: " << fuel << endl << "Model: " << model << endl << "Max speed: " << max_speed << endl << "Number of wheels: " << wheels << endl;
}
