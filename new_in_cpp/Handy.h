#pragma once

#include<string>
#include<iostream>

using namespace std;

class Handy
{
public:
	Handy();
	Handy(string name);
	Handy(const Handy& handy);
	~Handy();
	string get_handy_name();
private:
	string name;
};
