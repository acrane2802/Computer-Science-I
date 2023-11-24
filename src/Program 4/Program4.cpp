// Andrew Crane
// October 15th 2023
// Computer Science 1
// this program reads in 2 numbers from a file containing random data, computes the average, and prints it out

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {

	std::string data;
	std::vector<float> numbers;
	float sum_total = 0;

	std::ifstream data_file("./Random.txt");

	while (data_file >> data) 
	{
		float temp_number = std::stof(data);
		numbers.push_back(temp_number);
	}

	for (size_t i = 0; i < numbers.size(); i++)
	{
		sum_total += numbers[i];
	}

	float final_average = sum_total / numbers.size();

	std::cout << final_average;

	return 0;
}