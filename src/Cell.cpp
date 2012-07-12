/*
 * Cell.cpp
 *
 *  Created on: Jul 11, 2012
 *      Author: katie
 */

#include "Cell.h"
#include "Monster.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Cell::Cell()
{
	room_content = "";
	hidden_room_content = "";
	player_present = false;
}

Cell::~Cell() {
	// TODO Auto-generated destructor stub
}

void Cell::monster_chance()
{
	srand((unsigned)time(0));
	int monster = rand()%8;
	if (monster == 0)
	{
		int monster_type = rand()%3;
		Monster a(monster_type);
	}
}
