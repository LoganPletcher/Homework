#ifndef PIT_H
#define PIT_H
#include <iostream>
#include "Wumpus.h"
using namespace std;

class Pit
{
public:
	Pit();
	void Pitpos(Player, AllWumps);
	Cells cellpos;
	char piticon;

private:

};

Pit::Pit()
{
	piticon = 255;
}

void Pit::Pitpos(Player p,	AllWumps w)
{
	for (int i = 0; i < 2; i++)
	{
		cellpos = { rand() % 8, rand() % 8 };
		if (cellpos.x == p.cellpos.x && cellpos.y == p.cellpos.y
		 || cellpos.x == p.cellpos.x-1 && cellpos.y == p.cellpos.y
		 || cellpos.x == p.cellpos.x && cellpos.y == p.cellpos.y+1
		 || cellpos.x == p.cellpos.x-1 && cellpos.y == p.cellpos.y+1
		 || cellpos.x == w.Ed.cellpos.x && cellpos.y == w.Ed.cellpos.y
		 || cellpos.x == w.Sark.cellpos.x && cellpos.y == w.Sark.cellpos.y
		 || cellpos.x == w.MCP.cellpos.x && cellpos.y == w.MCP.cellpos.y)
		{
			cellpos = { rand() % 8, rand() % 8 };
			i = 0;
		}
		else
		{
			break;
		}
	}
}

#endif PIT_H