#pragma once
#include <iostream>
#include "Transport.h"

class Carpet_Flying : public Transport
{
public:
	Carpet_Flying(double distance) : Transport()
	{
		name = "Ковёр-самолёт";
		classification = "Воздушное транспортное средство";
		speed = 10;
		race_switch;
	}
	double get_time(double distance);
};