#include "Motorcycle.h"
#include "Transport.h"
Motorcycle::Motorcycle()
{
	Transport::Transport();
	color = engine_type = body_type = " ";
}
Motorcycle::Motorcycle(string fuel, string model, float max_speed, unsigned int wheels, string engine_type,string color,string body_type)
{
	Transport::Transport(fuel, model, max_speed, wheels);
	this->engine_type = engine_type;
	this->color = color;
	this->body_type = body_type;
}
string Motorcycle::getEngineType()const
{
	return engine_type;
}
string Motorcycle::getColor()const
{
	return color;
}
string Motorcycle::getBodyType()const
{
	return body_type;
}
void Motorcycle::setEngineType(string engine_type)
{
	this->engine_type = engine_type;
}
void Motorcycle::setColor(string color)
{
	this->color = color;
}
void Motorcycle::setBodyType(string body_type)
{
	this->body_type = body_type;
}
void Motorcycle::init()
{
	Transport::init();
	cout << "Engine type: " << endl;
	cin >> engine_type;
	cout << "Color:" << endl;
	cin >> color;
	cout << "Body type: " << endl;
	cin >> body_type;
}
void Motorcycle::print()const
{
	Transport::print();
	cout << "Engine type: " << engine_type << endl << "Color: " << color << endl << "Body type: " << body_type << endl;
}
