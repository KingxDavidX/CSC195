#include "GuessingGame.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void GuessingGame::getRandomNumber() {
	srand(time(0));
	cout << "enter a lowerbound: ";
	cin >> lowerBound;
	cout << "enter a lowerBound: ";
	cin >> upperBound;
	if (upperBound < lowerBound) {
		cout << "Upper bound must be greater than or equal to lower bound.\n";
		return;
	}
	int hiddenNumber = rand() % (upperBound-lowerBound + 1) + lowerBound;
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
	 if (guess == randomNumber) {
		return "Answer correct the number was " + to_string(randomNumber) + "\n";
	}
	 else if (guesses == 0) {
		 return "out of guesses the number was " + to_string(randomNumber) + "\n";
	 }
	else if (guess < randomNumber) {
		return "Guess incorrect the answer is greater than guess and you have " + to_string(guesses) + " left\n";
	}
	else {
		return "Guess incorrect the answer is less than guess and you have " + to_string(guesses) + " left\n";
	}
}

int GuessingGame::showRandomNumber() {
	return randomNumber;
}
