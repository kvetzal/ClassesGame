/*
 * World.h
 *
 *  Created on: Jul 11, 2012
 *      Author: katie
 */

#include "Player.h"
#ifndef WORLD_H_
#define WORLD_H_

class World {
public:
	int level;
	World();
	virtual ~World();
	void user_reaction(string user_response);
	void level_1();
};

#endif /* WORLD_H_ */
