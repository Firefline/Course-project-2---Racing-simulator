#include "Centaur.h"

double Centaur::get_time(double distance)
{
	this->distance = distance;
	int relax = 0;

	for (int a = 1; a < (distance / speed) * 60 / 8; ++a)
	{
		relax = relax + 2;
	}

	return ((distance / speed) * 60 + relax) / 60;
}