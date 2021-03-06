// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	int iNumber, iGuess, iCounter;

	srand(time(0));
	iNumber = rand() % 100 + 1;
	iCounter = 0;

	do
	{
		
		std::cout << "Have a guess: ";
		std::cin >> iGuess;

		
		if (iGuess > iNumber)
		{
			std::cout << "Try lower." << std::endl;
		}
		else if (iGuess < iNumber)
		{
			std::cout << "Try higher." << std::endl;
		}
		iCounter++;
	} while (iGuess != iNumber && iCounter != 5);

	if (iGuess == iNumber) 
	{
		std::cout << "Correct!" << std::endl;
	}
	else if (iCounter == 5)
	{
		std::cout << "Sorry, you ran out of guesses!" << std::endl;
	}
	

	system("pause");

    return 0;
}

