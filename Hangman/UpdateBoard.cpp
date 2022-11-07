#include "prototypes.h"
#include <iostream>
#include <string>

void UpdateBoard(int incorrectGuess, string gameWord)
{
	switch(incorrectGuess)
	{
	case 6:
		PrintGallows();
		break;
	case 5:
		cout << "I========" << endl;
		cout << "I       |" << endl;
		cout << "I       O" << endl;
		cout << "I        " << endl;
		cout << "I        " << endl;
		cout << "I        " << endl;
		cout << "I        " << endl;
		cout << "I_______ " << endl;
		
		break;
	case 4:
		cout << "I========" << endl;
		cout << "I       |" << endl;
		cout << "I       O" << endl;
		cout << "I       |" << endl;
		cout << "I       |" << endl;
		cout << "I        " << endl;
		cout << "I        " << endl;
		cout << "I_______ " << endl;

		break;
	case 3:
		cout << "I========" << endl;
		cout << "I       |" << endl;
		cout << "I       O" << endl;
		cout << "I       |" << endl;
		cout << "I       |" << endl;
		cout << "I      / " << endl;
		cout << "I        " << endl;
		cout << "I_______ " << endl;

		break;
	case 2:
		cout << "I========" << endl;
		cout << "I       |" << endl;
		cout << "I       O" << endl;
		cout << "I       |" << endl;
		cout << "I       |" << endl;
		cout << "I      / \\ " << endl;
		cout << "I        " << endl;
		cout << "I_______ " << endl;
		break;
	case 1:
		cout << "I========" << endl;
		cout << "I       |" << endl;
		cout << "I       O" << endl;
		cout << "I      /|" << endl;
		cout << "I       |" << endl;
		cout << "I      / \\ " << endl;
		cout << "I        " << endl;
		cout << "I_______ " << endl;
		break;
	case 0:
		cout << "I========" << endl;
		cout << "I       |" << endl;
		cout << "I       O" << endl;
		cout << "I      /|\\ " << endl;
		cout << "I       |" << endl;
		cout << "I      / \\ " << endl;
		cout << "I        " << endl;
		cout << "I_______ " << endl << endl;

		cout << "Game Over" << endl;
		cout << "The word was " << gameWord << "." << endl << endl;
			break;

			

	}
}