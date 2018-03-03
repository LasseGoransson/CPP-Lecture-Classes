#pragma once
#include "Field.h"
#include "Player.h"
using namespace std;

class Driver
{
public:
	Driver();

	void tick();

	~Driver();


private:
	Field fieldArray [40];
};

	