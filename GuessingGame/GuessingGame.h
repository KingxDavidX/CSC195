#pragma once
#include <iostream>

using namespace std;

class GuessingGame {
public:
	string checkGuess(int guess);
	bool checkForGuesses();
	void getRandomNumber(int upperBound, int lowerBound);
	int guesses;
private:
	int randomNumber;
};
