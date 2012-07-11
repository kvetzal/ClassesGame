/*
 * Monster.cpp
 *
 *  Created on: Jul 10, 2012
 *      Author: katie
 */

#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

Monster::Monster(int monster_type)
{
	vitality = 4;
	defense = 2;
	health = max_health();
	if (monster_type == 0)
	{
		strength = 2;
		intelligence = 2;
	}
	else if (monster_type == 1)
	{
		strength = 3;
		intelligence = 1;
	}
	else if (monster_type == 2)
	{
		strength = 1;
		intelligence = 3;
	}
	else
	{
		cout << "an error has occurred with the monster stats." << endl;
		strength = 0;
		intelligence = 0;
	}
}

Monster::~Monster() {
	// TODO Auto-generated destructor stub
}

int Monster::max_health()
{
	return (vitality * 10);
}

void Monster::print()
{
	if (health > 0)
	{
		cout << "Health: " << health  << "/" << max_health() << endl;
		cout << "Vitality: " << vitality << endl;
		cout << "Defense: " << defense << endl;
		cout << "Strength: " << strength << endl;
		cout << "Intelligence: " << intelligence << endl;
		cout << "Damage: " << damage() << endl;
	}
}

void Monster::hurt(int amount)
{
	if (defense > 5)
		health -= (amount / (defense / 5));
	else
		health -= amount;
	if (health <= 0)
	{
		health = 0;
	}
}

int Monster::damage()
{
	if (health > 0)
	{
		return strength * 1.5;
	}
	else
	{
		return 0;
	}
}

