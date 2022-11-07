// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Date created: 9/14/2022
//Last modified: 9/29/2022
//Authors: Tim V, & Tim J
/*
Current List of Bugs/Issues

*/

#include <iostream>
#include "prototypes.h"

using namespace std;

int main()
{
    string wordArray[] = { "unite", "pedal", "delicious", "numerous", "fact", "languid", "righteous", "tearful", "volcano", "wrong", "nuclear", "pyramid", "pocket", "ministry", "merchant", "ignorance", "firefighter","velvet","accountant", "banquet", "chorus", "asylum", "corruption", "ambition", "dilemma", "parameter", "pumpkin", "hippopotomonstrosesquipedaliophobia"};
    char alphabetArray[26] = { 'a', 'b', 'c', 'd','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    string buildGameWord;
    int i;
    string gameWord;
    int wordLength;
    char userGuess;
    char lowerCase;
    bool rightAnswer;
    int incorrectGuess;
    int keepPlaying;
    int index;
    bool fullWord;
    string userGuesses;
    int alphabetIndex;
    bool alreadyGuessed;

    

   
    keepPlaying = 1;
    
    
    while (keepPlaying > 0)
    {
        //Initialize randomization
        srand(time(NULL));
        fullWord = false;
        alphabetIndex = 0;
        ResetAlphabet(alphabetArray);

        cout << "Welcome to Hangman!" << endl;
        cout << "In this game you will have to guess the letters to a random word before the hangman is completed." << endl;
        cout << "Play and enjoy!" << endl << endl;
        cout << "Letters left unguessed:" << endl;

        while (alphabetIndex <= 25)
        {
            cout << alphabetArray[alphabetIndex];
            alphabetIndex++;
        }

        cout << endl;

        i = rand() % 28;

        gameWord = wordArray[i];

        wordLength = gameWord.length();

        buildGameWord = gameWord;

        for (int j = 0; j < wordLength; j++)
        {
            buildGameWord[j] = '_';
        }

        //cout << gameWord << endl;
       

        index = 0;

        

        

        PrintSpace(wordLength, buildGameWord);

        PrintGallows();

       
        incorrectGuess = 6;
        
        
        while ((incorrectGuess > 0) && (fullWord == false))
        {
            alreadyGuessed = false;
            rightAnswer = false;
            cout << "There are " << wordLength << " letters in the word." << endl;
            cout << "Incorrect guesses left: " << incorrectGuess << endl << endl;
           
            
            cout << "Enter a guess: ";
            cin >> userGuess;

            lowerCase = tolower(userGuess);
            
            alreadyGuessed = isGuessed(lowerCase, alphabetArray);

            while (alreadyGuessed == true)
            {
                cout << "Letter already guessed. Please try another letter: ";

                cin >> userGuess;
                lowerCase = tolower(userGuess);

                alreadyGuessed = isGuessed(lowerCase, alphabetArray);
            }
            
            cout << endl << endl;
            cout << "Letters left unguessed:" << endl;
            DisplayGuesses(lowerCase, alphabetArray);

            cout << endl;

            rightAnswer = CheckGuess(gameWord, lowerCase, rightAnswer, wordLength);

            if (rightAnswer == false)
            {
                incorrectGuess--;
            }


            /*
            else
            {
                correctGuess++;
            }
            */

            FindLetterPosition(gameWord, buildGameWord, lowerCase, rightAnswer);

            PrintSpace(wordLength, buildGameWord);

            CheckFullWord(gameWord,buildGameWord,fullWord);

            UpdateBoard(incorrectGuess, gameWord);

            
            
        }
        if (fullWord == true)
        {
            cout << "Congratulations! You win!" << endl << endl;
        }
        cout << "Continue playing? (0 to quit, 1 to keep playing): ";
        cin >> keepPlaying;


    }//while keepPlaying < 0
    

    return 0;
}

// Step 1 Come up with a list of words, currently at 10.
// Step 2 Welcome Screen
// Step 3 Pick random word
// Step 4 Display Screen
// Step 5 Tell the user how many letters in the word.
// Step 6 Asking for input
// Step 7 Determine if guess is correct
// Step 8 Incriment if guess is right 
// Step 8.5 Incriment if guess is wrong
// Step 9 If right display the letter
// Step 9.5 If wrong display part of the hangman
// Step 10 Repeat steps 6 through 9.5
// Step 11 Display winning if all letters correctly guessed
// Step 11.5 Displaying losing screen if hangman is complete
// Step 12 Do you want to play again?
// Step 12.5 If yes revert back to step 1
// Step 13 If no exit the game

/*
Standards:
Variables should be nouns
Functions should contain a verb

Functions should be camel case
If variables are more than one word camel case
Functions should do just one thing
Functions should start uppercase and then camel case
Wrap line after 80 characters
Don't leave dead code in the final project

File heading:
Filename
This file contains...

Function headings:
Function name
Date
Progammer(s)
Description of the function
List of parameters (include data type and purpose of each parameter)
ASSUMES: 


Acceptable Abbreviations:
rand for random

Notes:
Next class Monday the 3rd of October write functions that will update gallows for incorrect answers
Add the option if they want to play again

Hangman will look like this when user has reached limit of wrong guesses
                    O
                   /|\
                    |
                   / \

Incorrect guess one prints head
Incorrect guess two prints body
incorrect guess three prints one leg
Incorrect guess four prints second leg
Incorrect guess five prints one arm
Incorrect guess six prints second arm and ends game

*/





