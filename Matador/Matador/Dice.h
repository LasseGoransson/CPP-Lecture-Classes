#pragma once
#include "Die.h"
class Dice
{
public:
	Dice();
	int throwDice();
	bool isSameEyes();
	~Dice();

private:
	Die die1;
	Die die2;
	
	int latestrollDie1;
	int latestrollDie2;

};


