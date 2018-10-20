#include <iostream>
#include <vector>
using namespace std;

vector<int> vectorOfPrimes;

bool isPrime(int index) {
	for (vector<int>::const_iterator vecIndex = vectorOfPrimes.cbegin(); vecIndex != vectorOfPrimes.cend(); ++vecIndex) {
		if (index % *vecIndex == 0) {
			return false;
		}
	}
	return true;
}

long long findSolution(int goToNumber) {
	long long result = 0;

	cout << "Compiling Vector of Primes..." << endl;

	for (int index = 2; index <= goToNumber; ++index) {
		if (isPrime(index)) {
			cout << index << ": Prime" << endl;
			vectorOfPrimes.push_back(index);
		}
		else cout << index << ": Not Prime" << endl;
	}

	cout << "Adding Primest Together..." << endl;

	for (vector<int>::const_iterator vecIndex = vectorOfPrimes.cbegin(); vecIndex != vectorOfPrimes.cend(); ++vecIndex) {
		result += *vecIndex;
	}
	return result;
}

int main() {

	int goToNumber = 2000000;

	cout << "Answer: " << findSolution(goToNumber) << endl;

	system("pause");
	return 1;
}