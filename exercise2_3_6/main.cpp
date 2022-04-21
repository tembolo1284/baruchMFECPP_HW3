#include <iostream>
#include <stdio.h>
using namespace std;
#include "Point.hpp"

void print(const Circle& c) {
	cout << endl << "Radius is: " << c.rad() << endl;
	Point pnt = c.ctr();
	cout << "X coordinate of center is: " << pnt.X() << endl ;
	cout << "Y coordinate of center is: " << pnt.Y() << endl;
}

int main() {
	Circle c1; //create boring line with start and end at (0,0)
	print(c1); // confirm rad is 0 and center is at (0,0)
	double r1 = 2;
	Point p1(3, 2); //instantiate p1

	Circle c2(r1, p1); //creating circle w/ specific radius and center point.

	print(c2);

	Circle c3(c2); //copy contructor hard at work

	c3.ToString(); //call ToString on c3

	cout << endl << "Area of the circle is: " << c2.Area() << endl; //calling area on c2.  Should be 4*pi or about 12.56
	cout << endl << "Diameter of the circle is: " << c2.Diameter() << endl;
	cout << endl << "Circumference of the circle is: " << c2.Circumference() << endl;
	return 0;

}