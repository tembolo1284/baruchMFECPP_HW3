#include<vector>
#include<iostream>
#include<string>
using namespace std;

//vector <string> computeParameterValue(vector<vector<string>> sources) {

//}

int main() {

	
	vector<vector<string>> sources = { 
		{"2"},
		{"3"},
		{"P1:a","P3:b","P5:x"},
		{"P1:b","P2:q","P5:x"}
	};

	int rows = sources.size() - 2; /* size of y */

	cout << rows << endl;
	int columns = sources[2][0].size(); //how many columns in row 3
	cout << columns << endl;
	string currLoc = "Hello:xyz";
	cout << currLoc.substr(currLoc.find(':'),:);
	
	/*
	vector<vector<string>> values;
	vector<vector<string>> keys;
	for (int i = 2; i == rows; i++) {
		for (int j = 0; j < columns; j++) {
			currLoc = sources[i][j];
			values[i][j] = currLoc.substr(0, 2);  //creating a 2d vector storing just the keys
			values[i][j] = currLoc.find(':');						 //creating 2d vector storing just the keys

		}
	
	}
	*/



/*
vector<vector<int>> vect
{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};  */