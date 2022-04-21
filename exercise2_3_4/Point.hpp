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
	double X() const;
	void X(double newX_val);
	double Y() const;
	void Y(double newY_val); //fetching x and y coordinates, respectively
	string ToString() const; //returns cout string description of the point
	
	double Distance() const; //calc dist from current point to origin
	double Distance(Point& p1) const; //calc dist from curr pt to point passed in function
};

#endif