#pragma once
#include <iostream>
#include "Transport.h"

class Boots_AllTerrain : public Transport
{
public:
	Boots_AllTerrain(double distance) : Transport()
	{
		name = "�������-���������";
		classification = "�������� ������������ ��������";
		speed = 6;
		race_switch;
	}
	double get_time(double distance);
};