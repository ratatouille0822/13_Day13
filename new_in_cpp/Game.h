#pragma once
#include <string>
#include <iostream>

using namespace std;

class Game
{
public:
	Game();
	Game(string name);
	Game(const Game& game);
	~Game();
	string get_game_name();
private:
	string name;
		
};

