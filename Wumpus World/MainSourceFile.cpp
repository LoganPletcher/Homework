////////////////////////////////////////////////////////////
// File: Wumpus World
// Author: Logan Pletcher
// Date Created: 9/8/2015
// Brief: <description of the purpose of the file>
////////////////////////////////////////////////////////////
#include "Player.h"
#include "Pit.h"
#include "Wumpus.h"
#include "Gold.h"
#include <iostream>
using namespace std;

Player You{ 1, {3, 0}, {1, 0, 0, 0} };

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

void senses(Coordinates player, Coordinates pit1, Coordinates pit2, Coordinates wumpus, Coordinates gold)
{
	for (int i = 0; i < 2; i++)
	{
		if (player == 
		{

		}
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
	
	Pit pitone{ 254, {1, 2} };
	Pit pittwo{ 254, {0, 0} };
	Wumpus monster{ 2, {1, 3} };
	Gold loot{ 36, {0, 3} };
	pitone.surroundings(pitone.pitposition);
	pittwo.surroundings(pittwo.pitposition);
	monster.surroundings(monster.wumpusposition);
	loot.surroundings(loot.goldposition);
	user:
	grid(You.symbol, You.position.x, You.position.y);
	cout << endl;
	senses(You.position,
		pitone.left, pitone.right, pitone.up, pitone.down, 
		pittwo.left, pittwo.right, pittwo.up, pittwo.down,
		monster.left, monster.right, monster.up,
	char input;
	
	if (You.position.x == pitone.pitposition.x && You.position.y == pitone.pitposition.y)
	{
		system("cls");
		cout << "YOU HAVE DIED" << endl;
		system("pause");
		system("cls");
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
		You.position.x = 3;
		You.position.y = 0;
		goto user;
	}
	cin >> input;
	cout << endl;
	system("cls");
	for (int i = 0; i < 2; i++)
	{
		if (input == 119 || 115 || 100 || 97)
		{
			You.Movement(input);
			goto user;
		}
	}
	/*grid(You.symbol, You.position.x, You.position.y, 
	pitone.pitsymbol, pitone.pitposition.x, pitone.pitposition.y, 
	pittwo.pitsymbol, pittwo.pitposition.x, pittwo.pitposition.y, 
	monster.wumpussymbol, monster.wumpusposition.x, monster.wumpusposition.y, 
	loot.goldsymbol, loot.goldposition.x, loot.goldposition.y);*/
		
	system("pause");
	return 0;
}