#pragma once
#include <string>

using namespace std;

void PrintSpace(int numSpaces, string buildGameWord);

void PrintGallows();

void FindLetterPosition(string gameWord, string &buildGameWord, char guess, bool rightAnswer);

bool CheckGuess(string gameWord, char guess, bool rightAnswer, int wordLength);

void UpdateBoard(int incorrectGuess, string gameWord);

void CheckFullWord(string gameWord, string buildGameWord, bool &fullWord);

void DisplayGuesses(char lowerCase, char alphabet[]);

void ResetAlphabet(char alphabetArray[]);

bool isGuessed(char guess, char alphabetArray[26]);
