#include "person.h"



person::person()
{
}

person::person(string n, dato b)
{
	name = n;
	birthday = b;
}

string person::getName()
{
	return name;
}

dato person::getBirthday()
{
	return birthday;
}

void person::addCar(Bil car)
{
	bil = car;
}

person::~person()
{
}
