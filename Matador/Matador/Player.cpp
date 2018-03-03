#include "Player.h"



Player::Player()
{
}

Player::Player(string playerName)
{
	name = playerName;
}


int Player::move(Dice die)
{
	int diceThrow = die.throwDice();
	int newArrayPos = (currentField.getNum() - 1) + diceThrow;
	if (newArrayPos > 39)
	{
		newArrayPos = newArrayPos - 40;
	}
	return newArrayPos;
}

Player::~Player()
{
}
