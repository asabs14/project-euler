#include <iostream>
using namespace std;

bool isPrime(int palNum) {
	cout << "Cool! We found a palindrome! Checking to see if it's prime..." << endl;
	for (int firstNum = 999; firstNum > 0; --firstNum) {
		for (int secondNum = 999; secondNum > 0; --secondNum) {
			int product = firstNum * secondNum;
			if (product == palNum) {
				cout << "Gotcha!" << endl;
				cout << "The factors are " << firstNum << " and " << secondNum << "!" << endl;
				return false;
			}
			if (product < palNum) {
				if (secondNum == 999) return true;
				break;
			}
		}
	}
}

int findSolution() {
	cout << "Finding Solution..." << endl;
	int currNum = 999 * 999;
	bool found = false;
	while (currNum > 10000) {
		cout << currNum << endl;
		int highThree = currNum / 1000;
		int lowThree = currNum % 1000;
		int largestNum[6] = { -1 };
		largestNum[0] = highThree / 100;
		largestNum[5] = lowThree % 10;
		if (largestNum[0] == largestNum[5]) {
			cout << "Found 1!" << endl;
			largestNum[1] = highThree % 100 / 10;
			largestNum[4] = lowThree % 100 / 10;
			if (largestNum[1] == largestNum[4]) {
				cout << "Found 2!" << endl;
				largestNum[2] = highThree % 10;
				largestNum[3] = lowThree / 100;
				if (largestNum[2] == largestNum[3]) {
					if (!isPrime(currNum)) return currNum;
				}
			}
		}
		--currNum;
	}
}

int main() {

	cout << findSolution() << endl;
	system("pause");

	return 1;
}