#include "prototypes.h"
#include <string>
#include <iostream>


bool isGuessed(char guess,char alphabetArray[26])
{
	int index;
	bool alreadyGuessed;

	
	alreadyGuessed = true;
	for (index = 0; index <= 25; index++)
	{
		if (alphabetArray[index] == guess)
		{
			alreadyGuessed = false;
		}
		
	}
	

	 return alreadyGuessed;
}