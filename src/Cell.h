/*
 * Cell.h
 *
 *  Created on: Jul 11, 2012
 *      Author: katie
 */

#include <iostream>
#include <string>
#ifndef CELL_H_
#define CELL_H_

using namespace std;

class Cell {
public:
	string room_content;
	string hidden_room_content;
	bool player_present;
	Cell();
	virtual ~Cell();
	void monster_chance();
};

#endif /* CELL_H_ */
