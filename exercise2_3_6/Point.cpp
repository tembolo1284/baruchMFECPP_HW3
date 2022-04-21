#define _USE_MATH_DEFINES
#include "Point.hpp"
#include <cmath>
#include <sstream>

Point::Point() : x(0), y(0) {
	//x = 0.0;
    //y = 0.0; //default constructor. Using sexy colon syntax as rec'd by professor
	cout << "Default POINT constructor says hello to you." << endl;
}

Point::Point(double newX_val, double newY_val) : x(newX_val), y(newY_val) {
	//x = newX_val;
	//y = newY_val; //initialize new x and y values
	cout << "This is another POINT constructor." << endl;
}

Point::~Point() {
	cout << "See you later POINT..." << endl;
}

double Point::X() const {
	return x; //spits out value of x
}

double Point::Y() const {
	return y; //spits out value of y	
}

void Point::X(double newX_val) {
	x = newX_val;
	cout << "x variable has been set." << endl;
}

void Point::Y(double newY_val) {
	y = newY_val;
	cout << "y variable has been set." << endl;
}

string Point::ToString() const {
	
	stringstream pnt;
	pnt << "Point(" << x << "," << y << ")" << endl;
	cout << pnt.str();
	return pnt.str();
}

double Point::Distance() const {
	double result = sqrt(pow(x, 2.0) + pow(y, 2.0)); //(x^2 + y^2)^.05
		return result;
}

double Point::Distance(Point& p1) const {
	double result = sqrt(pow(x- p1.X(),2.0) + pow(y - p1.Y(),2.0)); // ((x2-x1)^2 + (y2-y1)^2)^0.5
return result;

}


/////Line part

Line::Line()  {
	Point startPoint;
	Point endPoint;
	 //default constructor. start and end point both (0,0)
	cout << "Default LINE constructor says hello to you." << endl;
}

Line::Line(const Point& pnt1, const Point& pnt2) {
	startPoint = pnt1;
	endPoint = pnt2;
	cout << "This is another LINE constructor." << endl;
}

Line::Line(const Line& l) {
	startPoint = l.startPoint;
	endPoint = l.endPoint;
	cout << "Copy LINE constructor says Hello to you." << endl;
}
Line::~Line() {
	cout << "See you later pretty LINE..." << endl;
}

Point Line::start() const {
	cout << endl << "Start Point is:(" << startPoint.X() << "," << startPoint.Y() << ")" << endl;
	return startPoint;
    //spits out value of x,y for start point
}

Point Line::end() const {
	cout << endl << "End Point is:(" << endPoint.X() << "," << endPoint.Y() << ")" << endl; //spits out value of x,y for start point
	return endPoint;
}

void Line::start(const Point& pt) { //set new start point for line
	startPoint = pt;
	cout << "New start point has been set." << endl;
}

void Line::end(const Point& pt) { //set new end point for line
	endPoint = pt;
	cout << "New end point has been set." << endl;
}

string Line::ToString() const {
	stringstream pnt;
	pnt << "Line has Start: (" << startPoint.X() << "," << startPoint.Y() <<"), and an End of: (" << endPoint.X() << "," << endPoint.Y() << ")" << endl;
	cout << pnt.str();
	return pnt.str();
}

double Line::Length() const {
	double result = sqrt(pow(endPoint.X()-startPoint.X(), 2.0) + pow(endPoint.Y()-startPoint.Y(), 2.0));
	return result;
}

//////Circle magic time

Circle::Circle() {
	radius = 0.0;
	Point pt; //default constructor. 
	cout << "Default CIRCLE constructor says hello to you." << endl;
}

Circle::Circle(const double& r, const Point& pt) {
	radius = r; //setting radius equal to r
	center = pt; //setting Point center equal to pt passed by ref
	cout << "This is another CIRCLE constructor." << endl;
}

Circle::Circle(const Circle& c) {
	radius = c.radius;
	center = c.center;
	cout << "Copy CIRCLE constructor says Hello to you." << endl;
}

Circle::~Circle() {
	cout << "See you later CIRCLE..." << endl;
}

double Circle::rad() const {
	return radius; //spits out value of radius
}

Point Circle::ctr() const {
	return center; //spits out Point center	
}

void Circle::rad(const double& newR_value) {
	radius = newR_value;
	cout << "radius has been set." << endl;
}

void Circle::ctr(const Point& pt) {
	center = pt;
	cout << "new center has been set." << endl;
}

string Circle::ToString() const {

	stringstream pnt;
	pnt << "The Circle has area: " << M_PI * radius * radius << ", diameter: " << 2 * radius << ", and a Circumference of: " << 2 * M_PI * radius << endl;
	cout << pnt.str();
	return pnt.str();
}

double Circle::Area() const {
	double result = M_PI * radius * radius;
	return result;
}

double Circle::Circumference() const {
	double result = 2 * M_PI * radius;
	return result;
}

double Circle::Diameter() const {
	double result = 2 * radius;
	return result;
}


