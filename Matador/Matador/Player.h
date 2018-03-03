#pragma once
#include <string>
#include "Field.h"
#include "Dice.h"
using namespace std;

class Player
{
public:
	Player();

	Player(string playerName);

	int move(Dice die);


	~Player();
private:
	string name;
	Field currentField;
};

