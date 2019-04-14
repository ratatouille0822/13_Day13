#include "pch.h"
#include "Game.h"


Game::Game()
{
	cout << "Game constructed in Game()" << endl;
}

Game::Game(string name)
{
	cout << "Game constructed in Game(string name)" << endl;
	this->name = name;
}

Game::Game(const Game& handy)
{
	cout << "Game constructed in Game(const Game& handy)" << endl;
	this->name = handy.name;
}

Game::~Game()
{
	cout << "Game destructed in ~Game()" << endl;
}


string Game::get_game_name()
{
	return this->name;
}
