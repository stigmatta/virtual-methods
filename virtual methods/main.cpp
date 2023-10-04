#include <iostream>
#include "Transport.h"
#include "Automobile.h"
#include "Motorcycle.h"
#include "Ship.h"
#include "Tramway.h"
using namespace std;
int main()
{
	Transport* ptr = nullptr;
	int ch;
	cout << "Create your transport: " << endl;
	cout << "1.Automobile" << endl << "2.Ship" << endl << "3.Tramway" << endl << "4.Motorcycle" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
		ptr = new Automobile();
		break;
	case 2:
		ptr = new Ship();
		break;
	case 3:
		ptr = new Tramway();
		break;
	case 4:
		ptr = new Motorcycle();
		break;
	}
	ptr->init();
	ptr->print();
	delete ptr;
}
