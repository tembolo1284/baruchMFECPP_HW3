#include "Point.hpp"
#include <cmath>
#include <sstream>

Point::Point() : x(0), y(0) {
	//x = 0.0;
    //y = 0.0; //default constructor. Using sexy colon syntax as rec'd by professor
	cout << "Default constructor says hello to you." << endl;
}

Point::Point(double newX_val, double newY_val) : x(newX_val), y(newY_val) {
	//x = newX_val;
	//y = newY_val; //initialize new x and y values
	cout << "This is another constructor." << endl;
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
	cout << "x variable has been set." << endl;
}

void Point::setY(double newY_val) {
	y = newY_val;
	cout << "y variable has been set." << endl;
}

string Point::ToString(double x_val, double y_val) const {
	double x = x_val;
	double y = y_val;
	stringstream pnt;
	pnt << "Point(" << x << "," << y << ")" << endl;
	cout << pnt.str();
	return pnt.str();
}

double Point::DistanceOrigin() const {
	double result = sqrt(pow(x, 2.0) + pow(y, 2.0)); //(x^2 + y^2)^.05
		return result;
}

double Point::Distance(Point p1) const {

	double result = sqrt(pow(x- p1.getX(),2.0) + pow(y - p1.getY(),2.0)); // ((x2-x1)^2 + (y2-y1)^2)^0.5
return result;

}