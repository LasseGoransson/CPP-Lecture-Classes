#pragma once
#include <string>
using namespace std;


class Field
{
public:
	Field();

	Field(int place, string name);

	int getNum();
	string getName();
	
	string toString();
	


	~Field();

private:
	string field_name;
	int field_number;
};

