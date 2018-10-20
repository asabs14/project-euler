#include <iostream>
using namespace std;

int squareOfSums(int num) {
	int result = 0;
	for (int index = 1; index <= num; ++index) {
		result += index;
	}
	result *= result;
	return result;
}

int sumOfSquares(int num) {
	int result = 0;
	for (int index = 1; index <= num; ++index) {
		result += (index * index);
	}
	return result;
}


int findSolution() {
	int num = 100;
	int solution = squareOfSums(num) - sumOfSquares(num);
	return solution;
}


int main() {

	cout << "Answer: " << findSolution() << endl;

	system("pause");
	return 1;
}