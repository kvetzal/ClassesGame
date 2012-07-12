/*
 * World.cpp
 *
 *  Created on: Jul 11, 2012
 *      Author: katie
 */

#include "World.h"
#include "Cell.h"

World::World()
{
	level = 1;
	level_1();
}

World::~World() {
	// TODO Auto-generated destructor stub
}


void World::user_reaction(string user_response)
{
	if (user_response == "N" || user_response == "North" ||
		user_response == "north" || user_response == "NORTH" ||
		user_response == "n")
	{
	}
}

void World::level_1()
{
	const int CELL_X = 3;
	const int CELL_Y = 1;
	Cell prison_cell[CELL_X][CELL_Y];
	prison_cell[0][0].room_content = "a luxurious bed made from what is, I'm sure, the finest straw and mud.";
	prison_cell[0][0].hidden_room_content = "two bobby pins";
	prison_cell[2][0].room_content = "an inviting prison cell door.";
	prison_cell[1][0].player_present = true;
}
