#include "Dice.h"
#include "Die.h"


Dice::Dice()
{
	// Create the 2 Die needed for the game
	Die die1;
	Die die2;

	// Nothing more to do in setup

}

int Dice::throwDice()
{
	latestrollDie1 = die1.roll();
	latestrollDie2 = die2.roll();
	return  latestrollDie1 + latestrollDie2;
}

bool Dice::isSameEyes()
{
	return (latestrollDie1 == latestrollDie2);
}



Dice::~Dice()
{
}
