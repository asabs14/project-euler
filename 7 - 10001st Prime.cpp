#include <iostream>
using namespace std;

int setOfPrimes[10001] = { -1 };
int primeCnt = 0;

bool isPrime(int num) {
	
	for (int index = 0; index < primeCnt; ++index) {
		if (num % setOfPrimes[index] == 0) {
			return false;
		}
	}
	return true;
}


int findSolution(int num) {
	for (int index = 2; primeCnt < num; ++index) {
		if (isPrime(index)) {
			setOfPrimes[primeCnt] = index;
			++primeCnt;
		}
	}
	return setOfPrimes[num - 1];
}

int main() {

	cout << "Answer: " << findSolution(10001) << endl;

	system("pause");
	return 1;
}