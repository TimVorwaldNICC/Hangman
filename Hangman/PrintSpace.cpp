//Function Name: PrintSpace
// This file contains the code for the PrintSpace function
// Date Created: 9/19/2022
// Last Modified: 9/19/2022
// Authors: Tim V & Tim J
/*
* Current Bugs/Issues:
* 
*/



#include "prototypes.h"
#include <iostream>

using namespace std;

void PrintSpace(int numSpaces, string buildGameWord) // Prints the spaces for the letters of the word, the parameters are the word length
{
	
	int count;
	

	count = 0;

	while (count < numSpaces)
	{
		
		cout << " " << buildGameWord[count] << " ";

		count++;
	}

	cout << endl << endl;
}