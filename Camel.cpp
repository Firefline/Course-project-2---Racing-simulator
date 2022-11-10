#include "Camel.h"

double Camel::get_time(double distance)
{
	this->distance = distance;
	double relax = 0;

	for (int a = 1; a < (distance / speed) / 30; ++a)
	{
		if (a == 1)
		{
			relax = relax + 5;
		}
		if (a > 1)
		{
			relax = relax + 8;
		}
	}

	return ((distance / speed) + relax);
}