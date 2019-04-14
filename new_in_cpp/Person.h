#pragma once
#include <string>
#include <iostream>
#include "Game.h"
#include "Handy.h"

class Person
{
public:
	Person();
	Person(string name, string handy_name, string game_name);
	Person(const Person& person);
	~Person();
	void ShowInfo();
private:
	string name;
	Game game;
	Handy handy;
};
