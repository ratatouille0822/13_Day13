#include "pch.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "Game.h"
#include "Handy.h"
#include "pch.h"
using namespace std;


int main()
{
	Person* person_instance = new Person("Zhang, Fei", "Xiaomi 9", "Super Mario");
	person_instance->ShowInfo();
	delete person_instance;

	system("Pause");
}

