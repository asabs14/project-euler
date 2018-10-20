#include <iostream>
using namespace std;

bool isPrime(int num) {
	cout << "Checking if it's prime..." << endl;
	int startNum = num / 2;
	for (int firstNum = startNum; firstNum > 0; --firstNum) {
		for (int secondNum = startNum; secondNum > 0; --secondNum) {
			int product = firstNum * secondNum;
			if (product == num) return false;
			if (product < num) {
				if (product == startNum) return true;
				break;
			}
		}
	}
}

int findSolution(long long num) {
	cout << "Looking for factors..." << endl;
	int startNum = sqrt(num);
	for (int factor = startNum; factor > 0; --factor) {
		cout << factor << endl;
		if (num % factor == 0) {
			if (isPrime(factor)) return factor;
		}
	}
}

int main() {

	cout << "Largest prime factor: " << findSolution(600851475143) << endl;
	system("pause");
	return 1;
}