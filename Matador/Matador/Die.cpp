#include "Die.h"
using namespace std;


Die::Die()
{
	srand(time(nullptr)); // Seed the random generator with current time
}


int Die::roll()
{
	return rand() % 6 + 1;
}


Die::~Die()
{
}
