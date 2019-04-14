#include "pch.h"
#include "Person.h"

using namespace std;

Person::Person()
{
	cout << "Person constructed in Person()" << endl;
}
Person::Person(string name, string handy_name, string game_name) :name(name), handy(handy_name), game(game_name)
{
	cout << "Person constructed in Person(string name, string handy_name, string game_name)" << endl;
}

Person::Person(const Person& person)
{
	cout << "Person constructed in Person(const Person& handy)" << endl;
	this->name = person.name;
}

Person::~Person()
{
	cout << "Person destructed in ~Person()" << endl;
}

void Person::ShowInfo()
{
	cout << this->name << "has a " << handy.get_handy_name() << " playing " << game.get_game_name() << endl;
}
