#ifndef WUMPUS_H
#define WUMPUS_H
#include <iostream>
using namespace std;

class Wumpus
{
public:
	Wumpus();
	void Wumpuspos(Player);
	void Movement(Player, int, int, int, int);
	Cells cellpos;
	char wumpusicon;
	bool alive;

private:

};

Wumpus::Wumpus()
{
	wumpusicon = 2;
	alive = true;
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

void Wumpus::Movement(Player p, int x1, int y1, int x2, int y2)
{
	if ((cellpos.x != 0 || cellpos.x != 7 ) && ( cellpos.y != 0 || cellpos.x != 7))
	{
		if (p.cellpos.x < cellpos.x && 
			!((cellpos.x-1 == x1 && cellpos.y == y1) 
			|| (cellpos.x-1 == x2 && cellpos.y == y2)))
		{
			cellpos.x -= 1;
		}
		else if (p.cellpos.x > cellpos.x &&
			!((cellpos.x + 1 == x1 && cellpos.y == y1)
				|| (cellpos.x + 1 == x2 && cellpos.y == y2)))
		{
			cellpos.x += 1;
		}
		else /*if (cellpos.x == p.cellpos.x)*/
		{
			if (p.cellpos.y < cellpos.y &&
				!((cellpos.x == x1 && cellpos.y-1 == y1)
					|| (cellpos.x == x2 && cellpos.y-1 == y2)))
			{
				cellpos.y -= 1;
			}
			else if (p.cellpos.y > cellpos.y &&
				!((cellpos.x == x1 && cellpos.y+1 == y1)
					|| (cellpos.x == x2 && cellpos.y+1 == y2)))
			{
				cellpos.y += 1;
			}
		}
	}
}

#endif WUMPUS_H