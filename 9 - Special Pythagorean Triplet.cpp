#include <iostream>
using namespace std;

bool isRightTriangle(int a, int b, int c) {
	if (pow(double(a), 2) + pow(double(b), 2) == pow(double(c), 2)) return true;
	else {
		return false;
	}
}

int findSolution() {
	int a = 1;
	int b = 2;
	int c = 997;

	while (a < 333) {
		b = a + 1;
		c = 1000 - ((2 * a) + 1);
		for (; b < c; ++b, --c) {
			if (isRightTriangle(a, b, c)) {
				return a * b * c;
			}
			cout << a << " " << b << " " << c << endl;
		}
		++a;
	}
	return -1;
	
}

int main() {

	cout << "Answer: " << findSolution() << endl;

	system("pause");
	return 1;
}