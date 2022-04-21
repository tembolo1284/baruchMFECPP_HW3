#include <iostream>
#include <stdio.h>
using namespace std;
#include "Point.hpp"

void print(const Line& l) {
	l.start();
	l.end();
}

int main() {
	Line l1; //create boring line with start and end at (0,0)
	l1.start(); //confirm l1 starts and ends at (0,0)
	l1.end();

	Point p1(1, 5);
	Point p2(1, 0);

	Line l2(p1, p2); //creating line at specific points.

	Line l3(l2); //copy contructor hard at work

	l3.ToString(); //call ToString on l3

	cout << endl << "Length of the line is: " << l2.Length() << endl; //calling length on l2.  Should be Length = sqrt(25) = 5
	// output is humorous....constructor and destructor madness! Pretty cool to see.
	return 0;

}