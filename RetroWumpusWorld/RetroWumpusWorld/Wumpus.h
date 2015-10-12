#ifndef WUMPUS_H
#define WUMPUS_H
#include <iostream>
using namespace std;

class Wumpus
{
public:
	Wumpus();
	void Wumpuspos(Player);
	void Movement(Player);
	Cells cellpos;
	char wumpusicon;

private:

};

Wumpus::Wumpus()
{
	wumpusicon = 2;
}

void Wumpus::Wumpuspos(Player p)
{
	for (int i = 0; i < 2; i++)
	{
		cellpos = { rand() % 8, rand() % 8 };
		if (cellpos.x == p.cellpos.x && cellpos.y == p.cellpos.y
		 || cellpos.x == p.cellpos.x-1 && cellpos.y == p.cellpos.y
		 || cellpos.x == p.cellpos.x && cellpos.y == p.cellpos.y+1
		 || cellpos.x == p.cellpos.x-1 && cellpos.y == p.cellpos.y+1)
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

void Wumpus::Movement(Player p)
{
	if (cellpos.x != 0 || 7 && cellpos.y != 0 || 7)
	{
		if (p.cellpos.x < cellpos.x)
		{
			cellpos.x -= 1;
		}
		else if (p.cellpos.x > cellpos.x)
		{
			cellpos.x += 1;
		}
		else if (cellpos.x == p.cellpos.x)
		{
			if (p.cellpos.y < cellpos.y)
			{
				cellpos.y -= 1;
			}
			else if (p.cellpos.y > cellpos.y)
			{
				cellpos.y += 1;
			}
		}
	}
}

#endif WUMPUS_H