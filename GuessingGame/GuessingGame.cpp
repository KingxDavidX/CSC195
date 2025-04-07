#include <iostream>
#include "GuessingGame.h"

using namespace std;
GuessingGame Game{};

void submitGuess();

int main() {
	Game.guesses = 3;
	Game.getRandomNumber();

	while (Game.checkForGuesses()) {
		submitGuess();
	}

}

void submitGuess() {
	int guess;
	cout << "Enter a guess: ";
	cin >> guess;
	cout << Game.checkGuess(guess);
	if (guess == Game.showRandomNumber()) {
		Game.guesses = 0;
	}
}

