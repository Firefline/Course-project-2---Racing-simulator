#pragma once
#include <iostream>
#include "Transport.h"

class Broomstick : public Transport
{
public:
	Broomstick(double distance) : Transport()
	{
		name = "�����";
		classification = "��������� ������������ ��������";
		speed = 20;
		race_switch;
	}
	double get_time(double distance);
};