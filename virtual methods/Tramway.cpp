#include "Transport.h"
#include "Tramway.h"
Tramway::Tramway()
{
	Transport::Transport();
	tram_number = " ";
}
Tramway::Tramway(string fuel, string model, float max_speed, unsigned int wheels, string tram_number, unsigned int length, unsigned int width, unsigned int passenger_capacity)
{
	Transport::Transport(fuel, model, max_speed, wheels);
	this->tram_number = tram_number;
	this->length = length;
	this->width = width;
	this->passenger_capacity = passenger_capacity;
}
string Tramway::getTramNumber()
{
	return tram_number;
} 
unsigned int Tramway::getLength()
{
	return length;
}
unsigned int Tramway::getWidth()
{
	return width;
}
unsigned int Tramway::getPassengerCapacity()
{
	return passenger_capacity;
}
void Tramway::setTramNumber(string tram_number)
{
	this->tram_number = tram_number;
}
void Tramway::setLength(unsigned int length)
{
	this->length = length;
}
void Tramway::setWidth(unsigned int width)
{
	this->width = width;
}
void Tramway::setPassengerCapacity(unsigned int passenger_capacity)
{
	this->passenger_capacity = passenger_capacity;
}
void Tramway::init()
{
	Transport::init();
	cout << "Tramway license number: " << endl;
	cin >> tram_number;
	cout << "Length of the tramway: " << endl;
	cin >> length;
	cout << "Width of the tramway: " << endl;
	cin >> width;
	cout << "Passenger capacity in the tram: " << endl;
	cin >> passenger_capacity;
}
void Tramway::print()
{
	Transport::print();
	cout << "Tramway license number: " << tram_number << endl << "Length of the tramway: " << length << endl << "Width of the tramway: " << width << endl << "Passengers capacity: " << passenger_capacity << endl;
}
