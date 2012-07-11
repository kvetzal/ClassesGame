/*
 * World.cpp
 *
 *  Created on: Jul 11, 2012
 *      Author: katie
 */

#include "World.h"
#include "Cell.h"
#include "ClassesGame.cpp"

World::World()
{
	level = 1;
	level_1();
}

World::~World() {
	// TODO Auto-generated destructor stub
}


void World::user_reaction()
{
	if (user_response == "N" || user_response == "North" ||
		user_response == "north" || user_response == "NORTH")
	{
	}
}

void World::level_1()
{
	int CELL_X = 3;
	int CELL_Y = 1;
	Cell prison_cell[CELL_X][CELL_Y](level);
}

