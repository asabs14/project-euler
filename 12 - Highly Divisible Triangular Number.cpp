#include <iostream>
using namespace std;

int howManyDivisors(int num) {
	int divisorCnt = 0;
	int sqrtNum = sqrt(num);
	for (int index = 1; index < sqrt(num); ++index) {
		if (num % index == 0) ++divisorCnt;
	}
	divisorCnt *= 2;
	if (num % sqrtNum == 0) {
		++divisorCnt;
	}

	return divisorCnt;
}

int findSolution() {
	int triangleNum = 0;
	for (int index = 1; index < 400; ++index) {
		triangleNum += index;
	}
	for (int index = 400;; ++index) {
		triangleNum += index;
		if (howManyDivisors(triangleNum) > 500) return triangleNum;
	}
}

int main() {

	cout << "Answer: " << findSolution() << endl;

	system("pause");
	return 1;
}