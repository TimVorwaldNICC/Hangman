#include "prototypes.h"
#include <iostream>
#include <string>

void DisplayGuesses(char lowerCase, char alphabet[26])
{
	int index;

	index = 0;

	while (index <= 25)
	{
		if (lowerCase != alphabet[index])
		{
			cout << alphabet[index];
		}
		else
		{
			alphabet[index] = ' ';
			cout << alphabet[index];
		}
		index++;
	}
	

}

/*
* 
* Use an array for the letters of the alphabet and as letters are guessed replace the index of the array with a blank space
*/