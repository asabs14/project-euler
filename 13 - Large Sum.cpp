#include <iostream>
#include <fstream>
#include <string>
using namespace std;

long long findSolution() {
	ifstream inFile("C:\\Users\\User\\OneDrive\\Coding Practice\\Project Euler\\13 - Large Sum.txt");
	string line = "";

	long long result = 0;

	while (getline(inFile, line)) {
		string lineSub = line.substr(0, 14);
		long long adder = stoll(lineSub);
		result += adder;
	}

	return result / 10000;
}

int main() {

	cout << "Answer: " << findSolution() << endl;

	system("pause");
	return 1;
}