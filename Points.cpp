#include "Points.h"
#include <iostream>
#include <cmath>

//constructors
Points::Points() {
	x = 0;
	y = 0;
}

Points::Points(float a, float b) {
	x = a;
	y = b;
}

//setters
void Points::setX(float a) {
	x = a;
}

void Points::setY(float a) {
	y = a;
}

//getters
float Points::getX() {
	return x;
}
float Points::getY() {
	return y;
}

//others
void Points::DisplaySet() {
	std::cout << "(" << x << "," << y << ") \n";
}

float Points::Distance(Points P) {
	return sqrt(pow(x - P.x, 2) + pow(y - P.y, 2));
}