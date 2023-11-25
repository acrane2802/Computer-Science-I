// Andrew Crane
// November 21th 2023
// Computer Science 1
// uses 2 sorting algorithms, bubble and selection, to sort arrays

#include <iostream>
#include <vector>

std::vector<int> array1 = { 3, 25, 35, 22, 32, 27, 12, 39, 37, 44, 7, 23, 48, 9, 8, 41, 14, 13, 33, 40 };
std::vector<int> array2 = { 45, 13, 39, 46, 18, 8, 21, 50, 43, 24, 1, 11, 3, 33, 16, 19, 4, 23, 20, 38 };

int16_t bubble_iterations = 0;
int16_t selection_iterations = 0;

int selection_sort()
{
	int16_t index = 0;
	for (int16_t i = 0; i < array2.size() - 1; i++)
	{
		index = i;
		for (int16_t j = i + 1; j < array2.size(); j++)
		{
			if (array2[j] < array2[index])
			{
				index = j;
			}
		}

		if (index != i)
		{
			selection_iterations++;
			std::swap(array2[index], array2[i]);
		}
	}

	return 0;
}

int bubble_sort()
{
	bool done = false;

	for (int16_t i = 0; i < array1.size() - 1; i++)
	{
		done = false;
		for (int16_t j = 0; j < array1.size() - i - 1; j++)
		{
			if (array1[j] > array1[j + 1])
			{
				std::swap(array1[j], array1[j + 1]);
				bubble_iterations++;
				done = true;
			}
		}
	}

	return 0;
}

int main()
{
	for (int16_t i = 0; i < array1.size(); i++)
	{
		std::cout << array1[i] << " ";
	}

	bubble_sort();
	std::cout << std::endl;

	for (int16_t i = 0; i < array1.size(); i++)
	{
		std::cout << array1[i] << " ";
	}

	std::cout << std::endl;
	std::cout << bubble_iterations << std::endl;
	std::cout << std::endl;

	for (int16_t i = 0; i < array2.size(); i++)
	{
		std::cout << array2[i] << " ";
	}

	selection_sort();
	std::cout << std::endl;

	for (int16_t i = 0; i < array2.size(); i++)
	{
		std::cout << array2[i] << " ";
	}

	std::cout << std::endl;
	std::cout << selection_iterations;
	std::cout << std::endl;

	return 0;
}
