#include <iostream>
using namespace std;

void fizzBuzz(int n) {

	if (n%3==0 && n%5==0) {
		cout << "FizzBuzz" << endl;
	}

	if (n % 3==0 && n % 5!=0) {
		cout << "Fizz" << endl;
	}

	if ((n % 3 !=0) && (n % 5 ==0)) {
		cout << "Buzz" << endl;
	}

	if ((n % 3 != 0) && (n % 5 != 0)) {
		cout << n << endl;
	}
}

int main() {
	for (int i = 0; i <= 15; i++) {
		fizzBuzz(i);
	}
	return 0;
}