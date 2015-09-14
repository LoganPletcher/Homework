////////////////////////////////////////////////////////////
// File: Wumpus World
// Author: Logan Pletcher
// Date Created: 9/8/2015
// Brief: <description of the purpose of the file>
////////////////////////////////////////////////////////////

#include <iostream>
#include "Player.h"
#include "Pit.h"
#include "Wumpus.h"
#include "Gold.h"
using namespace std;

/*void grid(unsigned char player, int plcoordOne, int plcoordTwo,
unsigned char pit1, int pi1coordOne, int pi1coordTwo,
unsigned char pit2, int pi2coordOne, int pi2coordTwo,
unsigned char wumpus, int wucoordOne, int wucoordTwo,
unsigned char gold, int golcoordOne, int golcoordTwo)
{
unsigned char empty = 176;
for (int i = 0; i < 4; i++)
{
for (int j = 0; j < 4; j++)
{
if (i == pi1coordOne && j == pi1coordTwo)
{
cout << pit1;
}
else if (i == plcoordOne && j == plcoordTwo)
{
cout << player;
}
else if (i == pi2coordOne && j == pi2coordTwo)
{
cout << pit2;
}
else if (i == wucoordOne && j == wucoordTwo)
{
cout << wumpus;
}
else if (i == golcoordOne && j == golcoordTwo)
{
cout << gold;
}
else
{
cout << empty;
}
}
cout << endl;
}
}*/

void shoot(Player p, Wumpus m)
{
	if ((p.facing.North == true) && (p.position.x > m.wumpusposition.x) && (p.position.y == m.wumpusposition.y))
	{
		cout << "YOU SHOT THE WUMPUS" << endl;
		m.wumpusposition = { 5, 5 };
		p.havearrow = false;
		system("pause");
		system("cls");
	}
	else if ((p.facing.South == true) && (p.position.x < m.wumpusposition.x) && (p.position.y == m.wumpusposition.y))
	{
		cout << "YOU SHOT THE WUMPUS" << endl;
		m.wumpusposition = { 5, 5 };
		p.havearrow = false;
		system("pause");
		system("cls");
	}
	else if ((p.facing.East == true) && (p.position.x == m.wumpusposition.x) && (p.position.y < m.wumpusposition.y))
	{
		cout << "YOU SHOT THE WUMPUS" << endl;
		m.wumpusposition = { 5, 5 };
		p.havearrow = false;
		system("pause");
		system("cls");
	}
	else if ((p.facing.West == true) && (p.position.x == m.wumpusposition.x) && (p.position.y > m.wumpusposition.y))
	{
		cout << "YOU SHOT THE WUMPUS" << endl;
		m.wumpusposition = { 5, 5 };
		p.havearrow = false;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "YOU FAILED TO HIT ANYTHING" << endl << "YOU HAVE NO MORE ARROWS" << endl;
		p.havearrow = false;
		system("pause");
		system("cls");
	}
}

void grid(unsigned char player, int plcoordOne, int plcoordTwo)
{
	unsigned char empty = 176;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == plcoordOne && j == plcoordTwo)
			{
				cout << player;
			}
			else
			{
				cout << empty;
			}
		}
		cout << endl;
	}
}

int main()
{

	Pit pitone{ 254,{ 1, 2 } };
	Pit pittwo{ 254,{ 0, 0 } };
	Wumpus monster{ 2,{ 1, 3 },true };
	Gold loot{ 36,{ 0, 3 } };
user:
	grid(You.symbol, You.position.x, You.position.y);
	char input;

	if (( You.position.x == pitone.pUP.x && You.position.y == pitone.pUP.y )
		|| ( You.position.x == pitone.pDOWN.x && You.position.y == pitone.pDOWN.y )
		|| ( You.position.x == pitone.pLEFT.x && You.position.y == pitone.pLEFT.y )
		|| ( You.position.x == pitone.pRIGHT.x && You.position.y == pitone.pRIGHT.y )
		|| ( You.position.x == pittwo.pUP.x && You.position.y == pittwo.pUP.y )
		|| ( You.position.x == pittwo.pDOWN.x && You.position.y == pittwo.pDOWN.y )
		|| ( You.position.x == pittwo.pLEFT.x && You.position.y == pittwo.pLEFT.y )
		|| ( You.position.x == pittwo.pRIGHT.x && You.position.y == pittwo.pRIGHT.y ))
	{
		cout << "YOU FEEL A BREEZE" << endl;
	}

	if (( You.position.x == monster.wUP.x && You.position.y == monster.wUP.y )
		|| ( You.position.x == monster.wDOWN.x && You.position.y == monster.wDOWN.y )
		|| ( You.position.x == monster.wLEFT.x && You.position.y == monster.wLEFT.y )
		|| ( You.position.x == monster.wRIGHT.x && You.position.y == monster.wRIGHT.y )
		&& ( monster.wAlive == true ))
	{
		cout << "YOU SMELL A STENCH" << endl;
	}

	if ((( You.position.x == loot.gUP.x && You.position.y == loot.gUP.y )
		|| ( You.position.x == loot.gDOWN.x && You.position.y == loot.gDOWN.y )
		|| ( You.position.x == loot.gLEFT.x && You.position.y == loot.gLEFT.y )
		|| ( You.position.x == loot.gRIGHT.x && You.position.y == loot.gRIGHT.y ))
		&& ( You.havegold == false ))
	{
		cout << "YOU SEE A GLITTER" << endl;
	}

	if (You.position.x == loot.goldposition.x && You.position.y == loot.goldposition.y && You.havegold == false)
	{
		system("cls");
		cout << "YOU HAVE PICKED UP GOLD" << endl;
		system("pause");
		system("cls");
		You.havegold = true;
		goto user;
	}

	if (You.position.x == 3 && You.position.y == 0 && You.havegold == true)
	{
		system("cls");
		cout << "YOU ARE WINNER" << endl;
		system("pause");
		system("cls");
		goto end;
	}

	if (You.position.x == pitone.pitposition.x && You.position.y == pitone.pitposition.y)
	{
		system("cls");
		cout << "YOU HAVE DIED" << endl;
		system("pause");
		system("cls");
		You.havegold = false;
		You.position.x = 3;
		You.position.y = 0;
		goto user;
	}
	else if (You.position.x == pittwo.pitposition.x && You.position.y == pittwo.pitposition.y)
	{
		system("cls");
		cout << "YOU HAVE DIED" << endl;
		system("pause");
		system("cls");
		You.havegold = false;
		You.position.x = 3;
		You.position.y = 0;
		goto user;
	}
	else if (You.position.x == monster.wumpusposition.x && You.position.y == monster.wumpusposition.y)
	{
		system("cls");
		cout << "YOU HAVE DIED" << endl;
		system("pause");
		system("cls");
		You.havegold = false;
		You.position.x = 3;
		You.position.y = 0;
		goto user;
	}
	cin >> input;
	cout << endl;
	system("cls");
	for (int i = 0; i < 2; i++)
	{
		if ((input == 119) || (input == 115) || (input == 100) || (input == 97))
		{
			You.Movement(input);
			goto user;
		}
		else if ((input == 117) || (input == 107) || (input == 106) || (input == 104))
		{
			You.turn(input);
			system("pause");
			system("cls");
			goto user;
		}
		else if ((input == 118) && (You.havearrow == true))
		{
			system("cls");
			cout << "YOU FIRE YOUR ARROW" << endl;
			if ((You.facing.North == true) && (You.position.x > monster.wumpusposition.x) && (You.position.y == monster.wumpusposition.y))
			{
				monster.WumpusShot(monster);
			}
			else if ((You.facing.South == true) && (You.position.x < monster.wumpusposition.x) && (You.position.y == monster.wumpusposition.y))
			{
				monster.WumpusShot(monster);
			}
			else if ((You.facing.East == true) && (You.position.x == monster.wumpusposition.x) && (You.position.y < monster.wumpusposition.y))
			{
				monster.WumpusShot(monster);
			}
			else if ((You.facing.West == true) && (You.position.x == monster.wumpusposition.x) && (You.position.y > monster.wumpusposition.y))
			{
				monster.WumpusShot(monster);
			}
			else
			{
				cout << "YOU FAILED TO HIT ANYTHING" << endl << "YOU HAVE NO MORE ARROWS" << endl;
				You.havearrow = false;
				system("pause");
				system("cls");
			}
			goto user;
		}
		else
		{
			system("cls");
			goto user;
		}
	}
	/*grid(You.symbol, You.position.x, You.position.y,
	pitone.pitsymbol, pitone.pitposition.x, pitone.pitposition.y,
	pittwo.pitsymbol, pittwo.pitposition.x, pittwo.pitposition.y,
	monster.wumpussymbol, monster.wumpusposition.x, monster.wumpusposition.y,
	loot.goldsymbol, loot.goldposition.x, loot.goldposition.y);*/
end:
	exit(0);
	system("pause");
	return 0;
}