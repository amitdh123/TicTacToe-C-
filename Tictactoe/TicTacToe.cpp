#include "TicTacToe.h"
#include "Deck.h"
#include <iostream>
using namespace std;

Deck deckobject;



bool TicTactoe::validate_user_input() {
	return 0;
}

bool TicTactoe::is_game_over() {
	return true;
}

void TicTactoe::get_user_input() {
	deckobject.printBoard();
	string player = "X";
	string peice = player == "X" ? "| X " : "| O ";
	int in = 0, row, col;

	do {

		while (!(in > 0 && in < 9))
		{
			std::cout << "\nPlayer " << player << " enter position: ";
			std::cin >> in;
		}

		row = in > 3 && in < 7 ? 3 : 1;                    // Sets row
		row = in > 6 && in < 10 ? 5 : row;

		col = in == 2 || in == 5 || in == 8 ? 1 : 0;       // Sets Column 
		col = in == 3 || in == 6 || in == 9 ? 2 : col;

	} while (deckobject.board[row][col] == "| X " || deckobject.board[row][col] == "| O ");

	deckobject.board[row][col] = peice;  // Convert position from board into the peice
	system("cls");                 // Clears everything in the window
	deckobject.printBoard();


}

void TicTactoe::start_game() {

}

