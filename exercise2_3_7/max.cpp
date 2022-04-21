#include "iostream"
#include "conio.h"
#include "vector"
#include <vector>

int maxDifference(vector<int> px) {

	double currDiff = 0; //variable to keep track of curr diff
	double runningDiff = 0;  //initialize var to 0
	for (int i = 0, i == px.size(), i++) {
		if (i > 0) {
			currDiff = (px[i] - px[i - 1]); //take val of i - i-1 
			if (currDiff > runningDiff) {
				runningDiff = currDiff; //if a new diff is greater than previous diff, update value
			}
		}
	}
	if (runningDiff) {
		return -1; //this will only happen if runningDiff remained 0
	}
	else {
		return runningDiff;
	}
}

int main() {
	vector<int> test{1, 3, 2, 5};

	maxDifference(test)

		return 0;

}