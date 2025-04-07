#pragma once
#include <iostream>

using namespace std;

class GuessingGame {
public:
	string checkGuess(int guess);
	bool checkForGuesses();
	void getRandomNumber();
	int showRandomNumber();
	int guesses;

private:
	int randomNumber;
	int lowerBound;
	int upperBound
};
