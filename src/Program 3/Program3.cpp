// Andrew Crane
// October 2nd 2023
// Computer Science 1
// computes population goven growth rate in decimal

#include <iostream>

int main() {

	int population = 0;
	float percent = 0;
	int days = 0;
	std::cout << "enter population:";
	std::cin >> population;
	std::cout << "enter percentage:";
	std::cin >> percent;
	percent += 1;
	std::cout << "enter days:";
		std::cin >> days;

	if (population < 2) {
		std::cout << "ERROR: too low pop" << std::endl;
	}

	if (days < 1) {
		std::cout << "ERROR: too low da" << std::endl;
	}

	for (size_t i = 0; i < days; i++)
	{
		population *= percent;
		std::cout << population << std::endl;
	}

	

	return 0;
}