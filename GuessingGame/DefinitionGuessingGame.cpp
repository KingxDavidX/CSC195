#include "GuessingGame.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void GuessingGame::getRandomNumber(int lowerBound, int upperBound) {
	srand(time(0));
	int randomNumber = rand() % 10 + 1;

}