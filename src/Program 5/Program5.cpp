// Andrew Crane
// October 25th 2023
// Computer Science 1
// This program reads data from a file then checks if its a digit or a character using isdigit() and prints it line by line with the characters location calculated through subtracting 64 from the ASCII

#include <iostream>
#include <fstream>

char i;

int checkIfNumberOrLetter(char e) {

	if (std::isdigit(e)) {

		return -1;
	}
	else {

		return 0;
	}

	return -2;
}

void printLetterandLocation() {

	std::cout << "Letter: " << i << std::endl;
	std::cout << "Location: " << i - 64 << std::endl;

}

int main() {

	std::ifstream fileIn;
	std::ofstream fileOut;

	fileIn.open("data.txt");

	while (fileIn >> i) {

		int state = checkIfNumberOrLetter(i);

		if (state == 0) {
			printLetterandLocation();
		}
		else {
			std::cout << "Number: " << i << std::endl;
		}


	}
	

	return 0;
}

