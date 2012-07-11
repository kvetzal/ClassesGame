//============================================================================
// Name        : ClassesGame.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
//#include <vector>
#include "Player.h"
#include "Monster.h"
#include "World.h"
using namespace std;

string race;
string user_response;


int main()
{
//	cout << rand() << endl;
//	exit(0);
//	vector<Monster> monsters;
//	monsters.push_back(Monster(0));
//	monsters.push_back(Monster(1));
//	monsters.push_back(Monster(2));
//	monsters.push_back(Monster(0));
//	monsters.push_back(Monster(1));
//	monsters.push_back(Monster(2));
//	monsters[0].print();
//	cout << monsters.size() << endl;
//	exit(0);


	World world();
	cout << "What is your race?" << endl;
	cout << "1) Human" << endl << "2) Dwarf" << endl << "3) Elf" << endl;
	cin >> user_response;

	if (user_response == "1")
		race = "human";
	else if (user_response == "2")
		race = "dwarf";
	else if (user_response == "3")
		race = "elf";

	Player p(race);
	p.hurt(10);
	p.print();

	/*for(int i = 0; i < 99; i++)
	{
		p.add_experience(p.next_level_experience(), race);
		p.print();
	}*/

	srand((unsigned)time(0));
	int monster_type = rand()%3;
	Monster m(monster_type);
	cout << endl;
	m.print();

	return 0;
}
