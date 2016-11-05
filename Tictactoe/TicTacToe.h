#pragma once
#include "Deck.h"
#include "Player.h"
class TicTacToe
{
public:
	Deck arrOfObject[10];
	int game_number;
	Player player_1;
	Player player_2;
	bool validate_user_input(int value);
	bool is_game_over();
	void get_user_input();
	void start_game();

	TicTacToe();
	~TicTacToe();
};

