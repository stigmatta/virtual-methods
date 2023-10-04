#include "Automobile.h"
#include "Transport.h"
Automobile::Automobile()
{
	Transport::Transport();
	license_plate = transmission_type = " ";
	engine_capacity = 0;
}
Automobile::Automobile(string fuel, string model, float max_speed, unsigned int wheels, string license_plate, string transmission_type, unsigned int engine_capacity)
{
	Transport::Transport(fuel, model, max_speed, wheels);
	this->license_plate = license_plate;
	this->transmission_type = transmission_type;
	this->engine_capacity = engine_capacity;
}
string Automobile::getLicensePlate()const
{
	return license_plate;
}
string Automobile::getTransmissionType()const
{
	return transmission_type;
}
unsigned int Automobile:: getEngineCapacity()const
{
	return engine_capacity;
}
void Automobile::setLicencePlate(string license_plate)
{
	this->license_plate = license_plate;
}
void Automobile::setTransmissionType(string transmission_type)
{
	this->transmission_type = transmission_type;
}
void Automobile::setEngineCapacity(unsigned int engine_capacity)
{
	this->engine_capacity = engine_capacity;
}
void Automobile:: init()
{
	Transport::init();
	cout << "License plate:" << endl;
	cin >> license_plate;
	cout << "Transmission type:" << endl;
	cin >> transmission_type;
	cout << "Engine capacity: " << endl;
	cin >> engine_capacity;
}
void Automobile::print()
{
	Transport::print();const
	cout << "License plate: " << license_plate << endl << "Transmission type: " << transmission_type << endl << "Engine capacity: " << engine_capacity << endl;
}
