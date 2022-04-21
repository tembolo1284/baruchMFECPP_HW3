#include <iostream>
#include <stdio.h>
using namespace std;
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"

void print(const Point& pnt) {
	cout << "Your point is: (" << pnt.X() << "," << pnt.Y() << ")" << endl;
}

void print(const Circle& c) {
	cout << endl << "Radius is: " << c.rad() << endl;
	Point pnt = c.ctr();
	cout << "X coordinate of center is: " << pnt.X() << endl ;
	cout << "Y coordinate of center is: " << pnt.Y() << endl;
}

int main() {

	double x_pt{}, y_pt{}; //variable for x and y coordinates
	Point pnt1; //default constructor call
	int a = 1; //random variables for point use later
	int b = 2;

	cout << "Please enter a number for the x coordinate: ";
	cin >> x_pt;  //saves value into x_pt
	cout << "Please enter a number for the y coordinate: ";
	cin >> y_pt; //saves value into y_pt

	pnt1.X(); //calls setx from class and binds x_pt's value to x for pnt1
	pnt1.Y(); //same as above but for the y coordinate

	Point pnt2(x_pt, y_pt);
	Point pnt3(a, b); //create new pnt3 with coordinates a and b
	print(pnt3); //call print function for pnt3
	print(pnt2); //call print function for pnt2 as well
	pnt2.ToString(); //pnt2 going through ToString function

	cout << "X coordinate of pnt2 is: " << pnt2.X() << endl; //print out x coordinate of pnt1
	cout << "Y coordinate of pnt2 is: " << pnt2.Y() << endl; //print out y coordinate of pnt1

	//testing distance functions
	cout << "Distance from your pnt to the origin is: " << pnt3.Distance() << endl; //should be (2^2 +1^2)^0.5 = sqrt of 5
	cout << "Distance between the two points is: " << pnt1.Distance(pnt3) << endl; //should be ((x-2)^2 + (y-1)^2)^0.5

	return 0;

}