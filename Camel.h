#pragma once
#include <iostream>
#include "Transport.h"

class Camel : public Transport
{
public:
	Camel(double distance) : Transport()
	{
		name = "�������";
		classification = "�������� ������������ ��������";
		speed = 10;
		race_switch;
	}
	double get_time(double distance);
};