#include <iostream>
#include "GuessingGame.h"

using namespace std;
GuessingGame Game{};

void submitGuess();

int main() {
	srand(time(0));

	char playAgain = 'y';

	while (playAgain == 'y' || playAgain == 'Y') {
		Game.resetGame();
		while (Game.checkForGuesses()) {
			submitGuess();
		}
	cout << "Play again? (y/n): ";
	cin >> playAgain;
	cout << "---------------------------------------\n";
	}
	cout << "Thanks for playing!\n";
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

