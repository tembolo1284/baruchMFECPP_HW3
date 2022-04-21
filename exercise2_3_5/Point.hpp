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



#endif