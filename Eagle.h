#pragma once
#include <iostream>
#include "Transport.h"

class Eagle : public Transport
{
public:
	Eagle(double distance) : Transport()
	{
		name = "Орёл";
		classification = "Воздушное транспортное средство";
		speed = 8;
		race_switch;
	}
	double get_time(double distance);
};