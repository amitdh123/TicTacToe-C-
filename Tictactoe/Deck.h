#pragma once
#include <string>
#include <iostream>
using namespace std;
class Deck
{

public:
	string board[7][4] = {
		{ "\n\n-------------\n" },
		{ "| 1 ", "| 2 ",  "| 3 ", "|\n" },
		{ "----+---+----\n" },
		{ "| 4 ", "| 5 ",  "| 6 ", "|\n" },
		{ "----+---+----\n" },
		{ "| 7 ", "| 8 ",  "| 9 ", "|\n" },
		{ "-------------\n" }
	};
	int player_1_choices[9];
	int player_2_choices[9];
	Deck();
	void printBoard();
	~Deck();
};

