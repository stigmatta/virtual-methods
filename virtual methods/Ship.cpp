#include "Ship.h"
#include "Transport.h"
#include <iostream>
Ship::Ship()
{
	Transport::Transport();
	ship_type = " ";
	length = width = lift_capacity = 0;
}
Ship::Ship(string fuel, string model, float max_speed, unsigned int wheels, string ship_type, unsigned int length, unsigned int width, unsigned int lift_capacity)
{
	Transport::Transport(fuel, model, max_speed, wheels);
	this->ship_type = ship_type;
	this->length = length;
	this->width = width;
	this->lift_capacity = lift_capacity;
}
string Ship::getShipType()
{
	return ship_type;
}
unsigned int Ship::getLength()
{
	return length;
}
unsigned int Ship::getWidth()
{
	return width;
}
unsigned int Ship:: getLiftCapacity()
{
	return lift_capacity;
}
void Ship::setShipType(string ship_type)
{
	this->ship_type = ship_type;
}
void Ship::setLength(unsigned int length)
{
	this->length = length;
}
void Ship::setWidth(unsigned int width)
{
	this->width = width;
}
void Ship::setLiftCapacity(unsigned int lift_capacity)
{
	this->lift_capacity = lift_capacity;
}
void Ship:: init()
{
	Transport::init();
	cout << "Ship type: " << endl;
	cin >> ship_type;
	cout << "Length of the ship: " << endl;
	cin >> length;
	cout << "Width of the ship:" << endl;
	cin >> width;
	cout << "Lift capacity:" << endl;
	cin >> lift_capacity;
}
void Ship:: print()
{
	Transport::print();
	cout << "Ship type: " << ship_type << endl << "Length of the ship: " << length << endl << "Width of the ship: " << width << endl << "Lift capacity: " << lift_capacity << endl;
}
