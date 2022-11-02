#pragma once
#include <iostream>
#include "Transport.h"

class Camel_HighSpeed : public Transport
{
public:
	Camel_HighSpeed(double distance) : Transport()
	{
		name = "Верблюд-быстроход";
		classification = "Наземное транспортное средство";
		speed = 40;
		race_switch;
	}
	double get_time(double distance);
};