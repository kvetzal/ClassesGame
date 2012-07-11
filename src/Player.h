/*
 * Player.h
 *
 *  Created on: Jul 9, 2012
 *      Author: katie
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include <iostream>

using namespace std;

class Player {
private:
	void level_up(string race);

public:
	int health;
	int vitality;
	int defense;
	int strength;
	int intelligence;
	int level;
	int experience;
	int player_x;
	int player_y;

	Player(string race);
	virtual ~Player();
	void print();

	int maximum_health();
	void hurt(int amount);
	void add_experience(int amount, string race);
	int next_level_experience();
	int attack();
};

#endif /* PLAYER_H_ */
