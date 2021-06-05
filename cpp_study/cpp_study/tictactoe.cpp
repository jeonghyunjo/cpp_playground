#include <iostream>
#include <string>
#include "TicMainClasses.h"

using namespace std;

int main() {
	cout << "Welcome to TicTacToe GAME!!!" << endl;

	GameBoard a;

	/*Entering names*/
	cout << "Enter the first player's name: ";
	string name1;
	cin >> name1;
	a.EnterName1(name1);

	cout << "Enter the second player's name: ";
	string name2;
	cin >> name2;
	a.EnterName2(name2);

	int turnCounter = 1;

	while (1) {
		a.turn(turnCounter);
		a.ShowBoard();

		if (a.checkWinner() == 1) {
			break;
		}
		++turnCounter;
	}

	if (turnCounter % 2 == 1) {
		cout << "You Won!!" << endl;
		cout << "The Winner is " << name1 << endl;
	}
	else {
		cout << "You Won!!" << endl;
		cout << "The Winner is " << name2 << endl;
	}

	return 0;
}
