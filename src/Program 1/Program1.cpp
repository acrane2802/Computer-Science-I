// Andrew Crane
// September 12th 2023
// Computer Science 1
// Computes random sum and waits for user to show answer

#include <iostream>
#include <random>

int main() {


	int num1 = std::rand() % 500 + 1;
	int num2 = std::rand() % 500 + 1;

	int sum = num1 + num2;

	std::cout << "  " << num1 << std::endl;
	std::cout << "+ " << num2 << std::endl;

	std::cout << "press any key to print sum!" << std::endl;
	system("pause");
	std::cout << sum << std::endl;
}