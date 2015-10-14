#ifndef GRID_H
#define GRID_H
#include <iostream>

using namespace std;

class Grid
{
public:
	Grid();
	void griddisplay(Player, Allpits, AllWumps, int, Stack4Grid);
	Cells gridcells;
	char empty;
	node cellnodes[256];

private:

};

Grid::Grid()
{
	empty = 197;
}

void Grid::griddisplay(Player pl, Allpits pi, AllWumps w, int n, Stack4Grid s)
{
	char grid[16][16];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			gridcells = { i, j };
			if (gridcells.x == pl.cellpos.x && gridcells.y == pl.cellpos.y)
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = pl.playericon;
				cout << grid[i][j];
			}
			else if (gridcells.x == w.Ed.cellpos.x && gridcells.y == w.Ed.cellpos.y)
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = w.Ed.wumpusicon;
				cout << grid[i][j];
			}
			else if (gridcells.x == w.Sark.cellpos.x && gridcells.y == w.Sark.cellpos.y)
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = w.Sark.wumpusicon;
				cout << grid[i][j];
			}
			else if (gridcells.x == w.MCP.cellpos.x && gridcells.y == w.MCP.cellpos.y)
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = w.MCP.wumpusicon;
				cout << grid[i][j];
			}
			else if (gridcells.x == pi.Recognizer.cellpos.x && gridcells.y == pi.Recognizer.cellpos.y)
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = pi.Recognizer.piticon;
				cout << grid[i][j];
			}
			else if (gridcells.x == pi.Peter.cellpos.x && gridcells.y == pi.Peter.cellpos.y)
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = pi.Peter.piticon;
				cout << grid[i][j];
			}
			else
			{
				cellnodes[n * (i - 1) + j].cellnum = n * (i - 1) + j;
				cellnodes[n * (i - 1) + j].element = n * (i - 1) + j + 1;
				cellnodes[n * (i - 1) + j].cellx = i - 1;
				cellnodes[n * (i - 1) + j].celly = j - 1;
				s.push(cellnodes[n * (i - 1) + j], cellnodes[(n * (i - 1) + j) - 1]);
				grid[i][j] = empty;
				cout << grid[i][j];
			}
		}
		cout << endl;
	}
}

#endif GRID_H