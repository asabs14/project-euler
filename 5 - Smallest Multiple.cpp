#include <iostream>
#include "isPrime.h"
using namespace std;

int findSolution(int num) {
	int smallestNum = 1;
	for (int index = 1; index < num; ++index) {
		if (isPrime(index)) {
			for (int powerNum = index; powerNum < num; powerNum *= index) {
				smallestNum *= index;
			}
		}
	}
	return smallestNum;
}


int main() {

	cout << "Answer: " << findSolution(20) << endl;

	system("pause");
	return 1;
}