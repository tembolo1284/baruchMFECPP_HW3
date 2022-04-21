#include "Point.hpp"
#include <cmath>
#include <sstream>

Point::Point() : x(0), y(0) {
	//x = 0.0;
    //y = 0.0; //default constructor. Using sexy colon syntax as rec'd by professor
}

Point::Point(double newX_val, double newY_val) : x(newX_val), y(newY_val) {
	//x = newX_val;
	//y = newY_val; //initialize new x and y values
}

Point::~Point() {
	cout << "See you later point...\n";
}

double Point::getX() const {
	return x; //spits out value of x
}

double Point::getY() const {
	return y; //spits out value of y
}

void Point::setX(double newX_val) {
	x = newX_val;
}

void Point::setY(double newY_val) {
	y = newY_val;
}

string Point::ToString(double x_val, double y_val) const {
	double x = x_val;
	double y = y_val;
	stringstream pnt;
	pnt << "Point(" << x << "," << y << ")" << endl;
	cout << pnt.str();
	return pnt.str();
}