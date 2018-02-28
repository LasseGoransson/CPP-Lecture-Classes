#pragma once
#include "dato.h"
#include "Bil.h"
#include <string>
using namespace std;

class person
{

public:
	person();
	person(string, dato);
	string getName();
	dato getBirthday();
	void addCar(Bil car);
	~person();

private:
	string name;
	dato birthday;
	Bil bil;
};

