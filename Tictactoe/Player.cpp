#include "Player.h"
#include <iostream>

Player::Player(){
	name = ' ';
	playing_mark = ' ';
}

Player::Player(string player_name, char mark_used) {
	name = player_name; playing_mark = mark_used; 
}

int Player::get_score() {
	return  ((stats.won * 2) + stats.drawn - stats.lost);
}

string Player::getPlayerName() {
	return name;
}

void Player::setPlayerName(string playerName) {
	name = playerName;
}

char Player::getPlayingMark() {
	return playing_mark;
}

void Player::setPlayingMark(char playingMark) {
	playing_mark = playingMark;
}

bool operator> (const Player &c1, const Player &c2) {
	return (c1 > c2);
}

bool operator< (const Player &c1, const Player &c2) {
	return (c1 < c2);
}

bool operator== (const Player &c1, const Player &c2) {
	return (c1 == c2);
}

void Player::printResult() {
	cout << "Player:" << getPlayerName() << " Mark:" << getPlayingMark() << " Score:" << get_score() << endl;
}

Player::~Player()
{
}
