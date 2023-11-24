// Andrew Crane
// November 1st 2023
// Computer Science 1
// This program reads 2 files into different arrays then compares each line to subsequently print out which are matching. it also calculates a final grade based on correct to incorrect ratio.

#include <iostream>
#include <fstream>


int main()
{
	std::ifstream exam_file_in;
	std::ifstream student_file_in;

	exam_file_in.open("./CorrectAnswers.txt");
	student_file_in.open("./StudentAnswers.txt");

	char correct_answers[20];
	char student_answers[20];

	int number_of_correct_answers = 0;
	int number_of_wrong_answers = 0;

	for (size_t i = 0; i < 20; i++)
	{
		exam_file_in >> correct_answers[i];
		student_file_in >> student_answers[i];
	}

	for (int i = 0; i < 20; i++)
	{
		if (student_answers[i] != correct_answers[i]) 
        {
			number_of_wrong_answers++;

			std::cout << "Question " << i + 1 << " Answer: " << correct_answers[i] << std::endl;
			std::cout << "Question " << i + 1 << " Provided Answer: " << student_answers[i] << std::endl;
		}
		else
		{
			number_of_correct_answers++;
		}
	}
    
	exam_file_in.close();
	student_file_in.close();

	float grade = (number_of_correct_answers / 20.0f) * 100.0f;

	std::cout << "Total Wrong Answers: " << number_of_wrong_answers << std::endl;
	std::cout << "Grade: " << grade << std::endl;

	if (grade > 70.0f)
	{
		std::cout << "Passed!" << std::endl;
    }
    else
    {
        std::cout << "Failed." << std::endl;
    }

	return 0;
}
