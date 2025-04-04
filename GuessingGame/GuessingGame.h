#pragma once
#include <iostream>

using namespace std;

class GuessingGame {
public:
	string checkGuess(int guess);
	bool checkForGuesses();
	void getRandomNumber(int upperBound, int lowerBound);
private:
	int guesses;
	int randomNumber;
};
