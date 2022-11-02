#include "Carpet_Flying.h"

double Carpet_Flying::get_time(double distance)
{
	this->distance = distance;
	double acceleration = 1.00;

	if (distance > 1000 || distance < 5000)
	{
		acceleration = 0.97;
	}
	if (distance > 5000 || distance < 10000)
	{
		acceleration = 0.90;
	}
	if (distance >= 10000)
	{
		acceleration = 0.95;
	}

	return (distance * acceleration) / speed ;
}