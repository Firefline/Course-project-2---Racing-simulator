#pragma once
#include <iostream>

class Transport
{
protected:
	std::string name;
	std::string classification;
	double speed;
	double distance;
	
public:
	Transport()
	{
		name = "Транспортное средство";
		classification = "Универсальное транспортное средство";
		speed = 0;
	}
	std::string get_name();
	std::string get_classification();
	double get_speed();
	double get_distance();
	double get_time(double distance);
	bool race_switch;
};