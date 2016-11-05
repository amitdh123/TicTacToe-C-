#include "Deck.h"
#include <iostream>
using namespace std;


Deck::Deck()
{
	
}

void Deck::printBoard()
{
	for (int row = 0; row < 7; row++) // Row of the 2D array
		for (int col = 0; col < 4; col++) // Column of the 2D array
			std::cout << board[row][col];
}

Deck::~Deck()
{
}
