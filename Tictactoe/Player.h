#pragma once
#include <string>
#include "Statistics.h";
using namespace std;

class Player
{
private:
	string name;
	char playing_mark;
	Statistics stats;
public:
	Player();
	Player(string player_name, char mark_used);
	int get_score();
	string getPlayerName();
	void setPlayerName(string playerName);
	char getPlayingMark();
	void setPlayingMark(char playingMark);
	friend bool operator> (const Player &c1 , const Player &c2);
	friend bool operator< (const Player &c1, const Player &c2);
	friend bool operator== (const Player &c1, const Player &c2);

	void printResult();
	~Player();
};

