#ifndef GRID_H
#define GRID_H
#include <iostream>
#include "Wumpus.h"

using namespace std;

class Grid
{
public:
	Grid();
	void griddisplay(Player, Allpits, AllWumps);
	Cells gridcells;
	char empty;

private:

};

Grid::Grid()
{
	empty = 197;
}

void Grid::griddisplay(Player pl, Allpits pi, AllWumps w)
{
	char grid[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			gridcells = { i, j };
			if (gridcells.x == pl.cellpos.x && gridcells.y == pl.cellpos.y)
			{
				grid[i][j] = pl.playericon;
				cout << grid[i][j];
			}
			else if (gridcells.x == w.Ed.cellpos.x && gridcells.y == w.Ed.cellpos.y)
			{
				grid[i][j] = w.Ed.wumpusicon;
				cout << grid[i][j];
			}
			else if (gridcells.x == w.Sark.cellpos.x && gridcells.y == w.Sark.cellpos.y)
			{
				grid[i][j] = w.Sark.wumpusicon;
				cout << grid[i][j];
			}
			else if (gridcells.x == w.MCP.cellpos.x && gridcells.y == w.MCP.cellpos.y)
			{
				grid[i][j] = w.MCP.wumpusicon;
				cout << grid[i][j];
			}
			else if (gridcells.x == pi.Recognizer.cellpos.x && gridcells.y == pi.Recognizer.cellpos.y)
			{
				grid[i][j] = pi.Recognizer.piticon;
				cout << grid[i][j];
			}
			else if (gridcells.x == pi.Peter.cellpos.x && gridcells.y == pi.Peter.cellpos.y)
			{
				grid[i][j] = pi.Peter.piticon;
				cout << grid[i][j];
			}
			else
			{
				grid[i][j] = empty;
				cout << grid[i][j];
			}
		}
		cout << endl;
	}
}

#endif GRID_H