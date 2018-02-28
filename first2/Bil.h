#pragma once
#include <string>
using namespace std;
class Bil
{
public:
	Bil();

	Bil(string regnr);

	void setRegNr(string regnr);
	
	~Bil();


private:
	string regNr;
};

