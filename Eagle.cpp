#include "Eagle.h"

double Eagle::get_time(double distance)
{
	this->distance = distance;
	double acceleration = 0.94;

	return (distance * acceleration) / speed;
}