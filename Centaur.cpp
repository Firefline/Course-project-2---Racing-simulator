#include "Centaur.h"

double Centaur::get_time(double distance)
{
	this->distance = distance;
	double relax = 0;

	for (int a = 1; a < (distance / speed) / 8; ++a)
	{
		relax = relax + 2;
	}

	return ((distance / speed) + relax);
}