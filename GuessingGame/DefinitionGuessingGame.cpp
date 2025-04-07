#include "GuessingGame.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void GuessingGame::getRandomNumber(int lowerBound, int upperBound) {
	srand(time(0));
	int hiddenNumber = rand() % (upperBound-lowerBound) + upperBound;
	randomNumber = hiddenNumber;

}

bool GuessingGame::checkForGuesses() {
	if (guesses > 0) {
		return true;
	}
	else {
		return false;
	}
}

string GuessingGame::checkGuess(int guess) {
	guesses--;
	if (guesses == 0) {
		return "out of guesses\n";
	}
	else if (guess == randomNumber) {
		return "Answer correct" + to_string(randomNumber) + "\n";
	}
	else if (guess < randomNumber) {
		return "Guess incorrect the answer is greater than guess and you have " + to_string(guesses) + " left\n";
	}
	else {
		return "Guess incorrect the answer is less than guess and you have " + to_string(guesses) + " left\n";
	}
}