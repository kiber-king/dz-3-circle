#include "circle.h"

void Circle::set_r(float rad) {
	radius = rad;
}

float Circle::get_r() {
	return radius;
}
float Circle::get_pl() {
	return pow(radius,2)*pi;
}
float Circle::get_perim() {
	return pi*2*radius;
}
