#pragma once
#ifndef circle_H
#define circle_H
#include <iostream>
#include <math.h>

class Circle {
private:
	float radius;
public:
	Circle(float rad1) {
		radius = rad1;
	}
	void set_r(float rad);
	float get_r();
	float get_pl();
	float get_perim();
	double pi = 3.14;
	~Circle() {

	}
};



#endif