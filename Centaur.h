#pragma once
#include <iostream>
#include "Transport.h"

class Centaur : public Transport
{
public:
	Centaur(double distance) : Transport()
	{
		name = "�������";
		classification = "�������� ������������ ��������";
		speed = 15;
		race_switch;
	}
	double get_time(double distance);
};