#include "Camel.h"

double Camel::get_time(double distance)
{
	this->distance = distance;
	int relax = 0;

	for (int a = 1; a < (distance / speed) * 60 / 30; ++a)
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

	return ((distance / speed) * 60 + relax) / 60;
}