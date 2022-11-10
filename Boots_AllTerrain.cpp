#include "Boots_AllTerrain.h"

double Boots_AllTerrain::get_time(double distance)
{
	this->distance = distance;
	double relax = 0;

	for (int a = 1; a < (distance / speed) / 60; ++a)
	{
		if (a == 1)
		{
			relax = relax + 10;
		}
		if (a > 1)
		{
			relax = relax + 5;
		}
	}

	return ((distance / speed) + relax);
}