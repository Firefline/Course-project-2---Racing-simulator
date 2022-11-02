#include "Broomstick.h"

double Broomstick::get_time(double distance)
{
	this->distance = distance;
	double acceleration = 1.00;

	for (int a = 1; a <= (distance / 1000); ++a)
	{
		acceleration = acceleration - 0.01;
	}

	return (distance * acceleration) / speed;
}