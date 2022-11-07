#include "prototypes.h"
#include <iostream>
#include <string>


bool CheckGuess(string gameWord, char guess, bool rightAnswer, int wordLength)
{
	int index;
	char wordLetter;
	
	index = 0;

	while ((index < wordLength) && (rightAnswer == false))
	{
		wordLetter = gameWord[index];
		if (guess != wordLetter)
		{
			index++;
		}
		else
		{
			rightAnswer = true;
		}
	}

	return rightAnswer;
}