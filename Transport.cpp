#include "Transport.h"

std::string Transport::get_name()
{
	return name;
}
std::string Transport::get_classification()
{
	return classification;
}
double Transport::get_speed()
{
	return speed;
}
double Transport::get_distance()
{
	return distance;
}
double Transport::get_time(double distance)
{
	this->distance = distance;
	this->speed = speed;
	return distance / speed;
}