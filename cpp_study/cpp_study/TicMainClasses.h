#include <iostream>
#include <string>
#include "TicMainFunctions.h"

using namespace std;

class GameBoard{
private:
	string PlayerName1;
	string PlayerName2;
	int winner;
	char Board[4][4];

public:
	GameBoard();
	void EnterName1(string name);
	void EnterName2(string name);
	void turn(int a);
	int checkEmpty(int col, int row);
	int checkWinner();
	void ShowBoard();
};

GameBoard::GameBoard() {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			Board[i][j] = '_';
		}
	}
}

void GameBoard::EnterName1(string name) {
	PlayerName1 = name;
}

void GameBoard::EnterName2(string name) {
	PlayerName2 = name;
}

void GameBoard::turn(int a) {
	int col, row;
	cout << "Enter the Column number(0~3): ";
	cin >> col;
	cout << "Enter the Row number(0~3): ";
	cin >> row;

	while (checkEmpty(col, row) == 1) {
		cout << "It is already marked space. Please enter the numbers again." << endl;
		cout << "Enter the Column number(0~3): ";
		cin >> col;
		cout << "Enter the Row number(0~3): ";
		cin >> row;
	}

	if (a % 2 == 1) {
		Board[col][row] = 'X';
	}
	else {
		Board[col][row] = 'O';
	}

}

int GameBoard::checkWinner() {
	int winnerCheck = 0;

	for (int i = 0; i < 4; ++i) {
		if (Board[i][0] == 'X' && Board[i][1] == 'X' && Board[i][2] == 'X' && Board[i][3] == 'X') {
			winnerCheck = 1;
		}
		if (Board[0][i] == 'X' && Board[1][i] == 'X' && Board[2][i] == 'X' && Board[3][i] == 'X') {
			winnerCheck = 1;
		}
	}
	if (Board[0][0] == 'X' && Board[1][1] == 'X' && Board[2][2] == 'X' && Board[3][3] == 'X') {
		winnerCheck = 1;
	}
	if (Board[0][3] == 'X' && Board[1][2] == 'X' && Board[2][1] == 'X' && Board[3][0] == 'X') {
		winnerCheck = 1;
	}

	for (int i = 0; i < 4; ++i) {
		if (Board[i][0] == 'O' && Board[i][1] == 'O' && Board[i][2] == 'O' && Board[i][3] == 'O') {
			winnerCheck = 1;
		}
		if (Board[0][i] == 'O' && Board[1][i] == 'O' && Board[2][i] == 'O' && Board[3][i] == 'O') {
			winnerCheck = 1;
		}
	}
	if (Board[0][0] == 'O' && Board[1][1] == 'O' && Board[2][2] == 'O' && Board[3][3] == 'O') {
		winnerCheck = 1;
	}
	if (Board[0][3] == 'O' && Board[1][2] == 'O' && Board[2][1] == 'O' && Board[3][0] == 'O') {
		winnerCheck = 1;
	}
	//Board[][] == 'X' && Board[][] == 'X' && Board[][] == 'X' && Board[][] == 'X'

	return winnerCheck;
}

int GameBoard::checkEmpty(int col, int row) {
	int checker;

	if (Board[col][row] == 'O') {
		checker = 1; //Already Marked
	}
	else if (Board[col][row] == 'X') {
		checker = 1; //Already Marked
	}
	else {
		checker = 0; //Not Marked Yet
	}

	return checker;
}

void GameBoard::ShowBoard() {
	cout << Board[0][0] << Board[0][1] << Board[0][2] << Board[0][3] << endl;
	cout << Board[1][0] << Board[1][1] << Board[1][2] << Board[1][3] << endl;
	cout << Board[2][0] << Board[2][1] << Board[2][2] << Board[2][3] << endl;
	cout << Board[3][0] << Board[3][1] << Board[3][2] << Board[3][3] << endl;
}