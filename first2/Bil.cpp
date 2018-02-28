#include "Bil.h"

Bil::Bil()
{}

Bil::Bil(string regnr)
{
	setRegNr(regnr);
}

void Bil::setRegNr(string regnr)
{
	regNr = regnr;
}


Bil::~Bil()
{
}
