#ifndef WUMPUS_H
#define WUMPUS_H
#include <iostream>
using namespace std;

class Wumpus
{
public:
	Wumpus();
	void Wumpuspos(Player, int);
	void Movement(Player, int, int, int, int, int);
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

void Wumpus::Wumpuspos(Player p, int s)
{
	for (int i = 0; i < 2; i++)
	{
		cellpos = { rand() % s, rand() % s };
		if (cellpos.x == p.cellpos.x && cellpos.y == p.cellpos.y
		 || cellpos.x == p.cellpos.x-1 && cellpos.y == p.cellpos.y
		 || cellpos.x == p.cellpos.x && cellpos.y == p.cellpos.y+1
		 || cellpos.x == p.cellpos.x-1 && cellpos.y == p.cellpos.y+1)
		{
			cellpos = { rand() % s, rand() % s };
			i = 0;
		}
		else
		{
			break;
		}
	}
}

void Wumpus::Movement(Player p, int x1, int y1, int x2, int y2, int s)
{
	if (( cellpos.x != 0 || cellpos.x != (s - 1) ) && ( cellpos.y != 0 || cellpos.x != (s - 1) ))
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