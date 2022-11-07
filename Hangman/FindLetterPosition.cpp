//Function Name: FindLetterPosition
// This file contains the code for the PrintSpace function
// Date Created: 9/26/2022
// Last Modified: 9/28/2022
// Authors: Tim V & Tim J
/*
* Current Bugs/Issues:
*
*/



#include "prototypes.h"
#include <iostream>
#include <string>

using namespace std;

void FindLetterPosition(string gameWord, string &buildGameWord, char guess, bool rightAnswer)//Finds the position of the letters in the word
{
	int found;
	found = -1;
	rightAnswer = false;

	do
	{
		found = gameWord.find(guess, found + 1);
		if (found != -1)
		{
			rightAnswer = true;
			 buildGameWord[found] = guess;
		}
	} while (found != -1);


	
}
