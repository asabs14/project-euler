#include <iostream>

bool isPrime(int num) {
	std::cout << "Checking if it's prime..." << std::endl;
	int maxFactor = sqrt(num);
	for (int factor = 2; factor <= maxFactor; ++factor){
		if (num % factor == 0) {
			std::cout << "Nope" << std::endl;
			return false;
		}
	}
	std::cout << "It's Prime!" << std::endl;
	return true;
}