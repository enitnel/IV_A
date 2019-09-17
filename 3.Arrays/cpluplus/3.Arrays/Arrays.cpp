#include <iostream>
#include <fstream>
int main(int argc, char* argv[])
{
	int Array[100];
	int countOfReps = 0;
	int i = 0;

	std::ifstream file("numbers.txt");	
	if (file.is_open())
	{
		for (i; i < 100; i++)
			file >> Array[i];

		file.close();
	}
	else
	{
		std::cout << "Can't open the file" << std::endl;
		return -1;
	}

	for (i = 0; i < 100; i++)
		if (Array[i] == Array[i + 1])
			countOfReps++;

	std::cout << "Count of repeating nimbers is " << countOfReps;
	system("pause>text");
	return 0;
}