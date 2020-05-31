#include <iostream>
#include <stdlib.h>

using namespace std;

char positions[9] = { '1','2','3','4','5','6','7','8','9' };

void PrintBoard() {
	cout << "\t Tic Tac Toe" << endl << endl;
	cout << "Player 1 <X> \t Player 2 <O>" << endl << endl;
	cout << "   " << positions[0] << "   |   " << positions[1] << "   |    " << positions[2] << endl;
	cout << "----------------------" << endl;
	cout << "   " << positions[3] << "   |   " << positions[4] << "   |    " << positions[5] << endl;
	cout << "----------------------" << endl;
	cout << "   " << positions[6] << "   |   " << positions[7] << "   |    " << positions[8] << endl << endl;
}

void CheckWin() {
	if ((positions[0] == positions[1]) && (positions[1] == positions[2]) && (positions[2] == 88) ||
		(positions[3] == positions[4]) && (positions[4] == positions[5]) && (positions[5] == 88) ||
		(positions[6] == positions[7]) && (positions[7] == positions[8]) && (positions[8] == 88) ||
		(positions[0] == positions[3]) && (positions[3] == positions[6]) && (positions[6] == 88) ||
		(positions[1] == positions[4]) && (positions[4] == positions[7]) && (positions[7] == 88) ||
		(positions[2] == positions[5]) && (positions[5] == positions[8]) && (positions[8] == 88) ||
		(positions[0] == positions[4]) && (positions[4] == positions[8]) && (positions[8] == 88) ||
		(positions[2] == positions[4]) && (positions[4] == positions[6]) && (positions[6] == 88))
	{
		cout << "Player 1 Wins!";
		exit(0);
	}


	else if ((positions[0] == positions[1]) && (positions[1] == positions[2]) && (positions[2] == 79) ||
		(positions[3] == positions[4]) && (positions[4] == positions[5]) && (positions[5] == 79) ||
		(positions[6] == positions[7]) && (positions[7] == positions[8]) && (positions[8] == 79) ||
		(positions[0] == positions[3]) && (positions[3] == positions[6]) && (positions[6] == 79) ||
		(positions[1] == positions[4]) && (positions[4] == positions[7]) && (positions[7] == 79) ||
		(positions[2] == positions[5]) && (positions[5] == positions[8]) && (positions[8] == 79) ||
		(positions[0] == positions[4]) && (positions[4] == positions[8]) && (positions[8] == 79) ||
		(positions[2] == positions[4]) && (positions[4] == positions[6]) && (positions[6] == 79))
	{
		cout << "Player 2 Wins!";
		exit(0);
	}
}

void Game() {
	int player1 = 0, player2 = 0;

	PrintBoard();

	cout << "Player 1: ";
	cin >> player1;


	if (positions[player1 - 1] == 'X' || positions[player1 - 1] == 'O') {
		do {
			cout << "The box is taken! Choose another one! " << endl;
			cin >> player1;
		} while ((positions[player1 - 1] == 'X') || (positions[player1 - 1] == 'O'));
	}


	positions[player1 - 1] = 88;
	system("CLS");
	PrintBoard();
	CheckWin();

	cout << "Player 2: ";
	cin >> player2;


	if (positions[player2 - 1] == 'X' || positions[player2 - 1] == 'O') {
		do {
			cout << "The box is taken! Choose another one! " << endl;
			cin >> player2;
		} while ((positions[player2 - 1] == 'X') || (positions[player2 - 1] == 'O'));
	}


	positions[player2 - 1] = 79;
	system("CLS");
	CheckWin();

	Game();
}

int main() {

	Game();

	return 0;
}