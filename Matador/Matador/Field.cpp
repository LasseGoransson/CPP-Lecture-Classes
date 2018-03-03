#include "Field.h"



Field::Field()
{
}

Field::Field(int place, string name)
{
	
		field_number = place;
		field_name = name;
	
}

int Field::getNum()
{
	return field_number;
}

string Field::getName()
{
	return field_name;
}


string Field::toString()
{
	
	return field_name;
	
}


Field::~Field()
{
}
