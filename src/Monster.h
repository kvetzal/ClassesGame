/*
 * Monster.h
 *
 *  Created on: Jul 10, 2012
 *      Author: katie
 */

#ifndef MONSTER_H_
#define MONSTER_H_

class Monster
{
public:
	int vitality;
	int defense;
	int strength;
	int intelligence;
	int health;
	Monster(int monster_type);
	virtual ~Monster();
	int max_health();
	void print();
	void hurt(int amount);
	int damage();
};

#endif /* MONSTER_H_ */
