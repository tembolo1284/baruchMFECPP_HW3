#ifndef Point_HPP
#define Point_HPP
#include <iostream>
#include <string>
using namespace std;

class Point {
private:
	double x;
	double y; //x and y coordinates, respectively.

public:
	Point(); //constructor
	Point(double x_val, double y_val); //initialization with x and y values
	
	~Point(); //destructor
	double getX() const;
	void setX(double newX_val);
	double getY() const;
	void setY(double newY_val); //fetching x and y coordinates, respectively
	string ToString(double xVal, double yVal) const; //returns cout string description of the point
	
	double DistanceOrigin() const; //calc dist from current point to origin
	double Distance(Point p1) const; //calc dist from curr pt to point passed in function
};

#endif