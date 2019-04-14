#include "Handy.h"

Handy::Handy()
{
	cout << "Handy constructed in Handy()" << endl;
}
Handy::Handy(string name)
{

	cout << "Handy constructed in Handy(string name)" << endl;
	this->name = name;
}

Handy::Handy(const Handy& handy)
{
	cout << "Handy constructed in Handy(const Handy& handy)" << endl;
	this->name = handy.name;
}

Handy::~Handy()
{
	cout << "Handy destructed in ~Handy()" << endl;
}

string Handy::get_handy_name()
{
	return this->name;
}

