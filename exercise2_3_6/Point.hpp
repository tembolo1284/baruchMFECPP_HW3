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

class Line {
private:
	Point startPoint;
	Point endPoint; //start and end points (0,0)

public:
	Line(); //constructor start and end points (0,0)
	Line(const Point& pt1, const Point& pt2); //initialization with start and end pts specified
	Line(const Line& l); //copy constructor

	virtual ~Line(); //destructor just copied virtual from the video
	
	Point start() const; //get start pt of current line
	void start(const Point& pt); //make pt2 new start point of line

	Point end() const; //get end point of current line
	void end(const Point& pt); //make pt2 new end point


	string ToString() const; //returns cout string description of the line

	double Length() const; //calc dist from current start to end point (length in R^2)
	
};


class Circle {
private:
	double radius; //radius
	Point center; //center of the circle
	
public:
	Circle(); //constructor with radius and center at 0 and (0,0). Boring
	Circle(const double& rad, const Point& ctr); //constructor with radius r and center at ctr
	Circle(const Circle& c); //copy constructor

	~Circle(); //destructor
	double rad() const; //gets radius r
	void rad(const double& newRad); //sets radius r

	Point ctr() const; //get center
	void ctr(const Point& newPt); //sets new center pt

	string ToString() const; //returns cout string description of the circle by listing radius, center, area, circumference, and diameter

	 
	double Area() const; //calc area of circle pi*r^2
	double Diameter() const; //calc diameter of circle 2*r
	double Circumference() const; //calc circumference of circle 2*pi*r
};

#endif