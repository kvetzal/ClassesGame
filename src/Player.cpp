/*
 * Player.cpp
 *
 *  Created on: Jul 9, 2012
 *      Author: katie
 */

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player(string race)
{
	if (race == "human")
	{
		vitality = 7;
		defense = 6;
		strength = 6;
		intelligence = 6;
	}
	else if (race == "dwarf")
	{
		vitality = 7;
		defense = 7;
		strength = 8;
		intelligence = 3;
	}
	if (race == "elf")
	{
		vitality = 7;
		defense = 7;
		strength = 3;
		intelligence = 8;
	}
	level = 1;
	health = maximum_health();
}

Player::~Player()
{
	// TODO Auto-generated destructor stub
}

int Player::maximum_health()
{
	return vitality * 10;
}

void Player::hurt(int amount)
{
	health -= amount / (defense / 5);
}

void Player::print()
{
	cout << "Vitality: " << vitality << endl << "Defense: " << defense << endl;
	cout << "Strength: " << strength << endl<< "Intelligence: " << intelligence << endl;
	cout << "Health: " << health << " / " << maximum_health() << endl;
	cout << "Experience: " << experience << endl;
	cout << "Level up at " << next_level_experience() << " experience points." << endl;
	cout << "Level: " << level << endl;
}

void Player::add_experience(int amount, string race)
{
	experience += amount;
	if (experience >= Player::next_level_experience())
	level_up(race);
}

void Player::level_up(string race)
{
	level++;
	vitality += 2;
	defense += 2;
	if (race == "human")
	{
		strength += 2;
		intelligence += 2;
	}
	else if (race == "dwarf")
	{
		strength += 3;
		intelligence += 1;
	}
	else if (race == "elf")
	{
		intelligence += 3;
		strength += 1;
	}
}

int Player::next_level_experience()
{
	return (level*level) * 100;
}

int Player::attack()
{
	return strength * 1.5;
}
