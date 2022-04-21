#include <iostream>
#include <stdio.h>
using namespace std;
#include "Point.hpp"

void print(const Point& pnt) {
	cout << "Your point is: (" << pnt.X() << "," << pnt.Y() << ")" << endl;
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

	pnt1.X(x_pt); //calls setx from class and binds x_pt's value to x for pnt1
	pnt1.Y(y_pt); //same as above but for the y coordinate

	Point pnt3(a, b); //create new pnt3 with coordinates a and b
	print(pnt3); //call print function for pnt3
	pnt1.ToString(x_pt, y_pt); //pnt3 going through ToString function

	double c = pnt1.X();
	double d = pnt1.Y();
	cout << "X coordinate of pnt1 is: " << c << endl; //print out x coordinate of pnt1
	cout << "Y coordinate of pnt1 is: " << d << endl; //print out y coordinate of pnt1

	//testing distance functions
	cout << "Distance from your pnt to the origin is: " << pnt3.Distance() << endl; //should be (2^2 +1^2)^0.5 = sqrt of 5
	cout << "Distance between the two points is: " << pnt1.Distance(pnt3) << endl; //should be ((x-2)^2 + (y-1)^2)^0.5

	return 0;

}