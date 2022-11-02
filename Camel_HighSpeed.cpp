#include "Camel_HighSpeed.h"

double Camel_HighSpeed::get_time(double distance)
{
	this->distance = distance;
	int relax = 0;

	for (int a = 1; a < (distance / speed) * 60 / 10; ++a)
	{
		if (a == 1)
		{
			relax = relax + 5;
		}
		if (a == 2)
		{
			relax = relax + 6.5;
		}
		if (a > 2)
		{
			relax = relax + 8;
		}
	}

	return ((distance / speed) * 60 + relax) / 60;
}