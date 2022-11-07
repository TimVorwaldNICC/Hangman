#include "prototypes.h"
#include <iostream>
#include <string>


void CheckFullWord(string gameWord, string buildGameWord, bool &fullWord)
{
	if (buildGameWord == gameWord)
	{
		fullWord = true;
	}
	else
	{
		fullWord = false;
	}

}