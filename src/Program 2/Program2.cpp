// Andrew Crane
// September 24th 2023
// Computer Science 1
// this program converts between fahrenheit and celsius by polling the user to convert the right one

#include <iostream>

int main()
{
	float count = 0;
	char unit = 0;

	std::cout << "please put in amount of metric unit: ";
	std::cin >> count;

	std::cout << "please put in output imperial unit (P, M, Q): ";
	std::cin >> unit;

	switch (unit)
	{
	case 'P':
		count *= 2.2046;
		std::cout << count << "lbs" << std::endl;
		break;
	case 'M':
		count *= 0.621388;
		std::cout << count << "mi" << std::endl;
		break;
	case 'Q':
		count *= 0.877193;
		std::cout << count << "quarts" << std::endl;
		break;
	}
	return 0;
}