//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File: RetroWumpusWorld																					//
// Author: Logan Pletcher																					//
// Date Created: 9/30/2015																					//
// Brief: Creates a program that will create a Top-Down Shooter Retro style 2D game.						//
//       The game must have a splash screen that has at least three options (Start Game, HighScores, Exit).	//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include "Cells.h"
#include "Player.h"
#include "Wumpus.h"
#include "AllWumps.h"
#include "Pit.h"
#include "AllPits.h"
#include "HighScoreTXTFile.h"
#include "GridCellsStack.h"
#include "Grid.h"
using namespace std;

void ZaGame(int size)
{
	srand(time(NULL));
	string input;
	Stack4Grid Stack;
	Grid theGrid;
	AllWumps Wumps;
	Allpits Pits;
	Player Flynn(size);
	HSTXTFILE Gold2Score;
	Wumps.Ed.Wumpuspos(Flynn, size);
	Wumps.Sark.Wumpuspos(Flynn, size);
	Wumps.MCP.Wumpuspos(Flynn, size);
	Pits.Recognizer.Pitpos(Flynn, Wumps, size);
	Pits.Peter.Pitpos(Flynn, Wumps, size);
	for (int i = 0; i < 2; i++)
	{
		Flynn.hit = false;
		Flynn.dead(Wumps.Ed.cellpos, Wumps.Sark.cellpos,
			Wumps.MCP.cellpos, Pits.Recognizer.cellpos,
			Pits.Peter.cellpos);
		if (Flynn.alive == false)
		{
			system("cls");
			Gold2Score.save(Flynn);
			cout << "YOU HAVE DIED\n";
			system("pause");
			break;
		}
		system("cls");
		cout << "Move your character by entering the 'w', 's', 'd', or 'a' key.\n";
		cout << "'w' moves you up, 's' moves you down,\n'd' moves you right, and 'a' moves you left.\n";
		cout << "Shoot the Wumpuses by entering the 'i', 'k', 'l', or 'j' key.\n";
		cout << "'i' shoots up, 'k' shoots down, 'l' shoots left, 'j' shoots right.\n";
		theGrid.griddisplay(Flynn, Pits, Wumps, size, Stack);
		cout << "\nEnter character: ";
		getline(cin, input);
		if (input == "quit")
		{
			break;
		}
		for (int j = 0; j < 2; j++)
		{
			if ((input == "w") || (input == "s") || (input == "d") || (input == "a"))
			{
				int tempx, tempy;
				tempx = Flynn.cellpos.x;
				tempy = Flynn.cellpos.y;
				Flynn.Movement(input);
				if (!(Flynn.cellpos.x == tempx && Flynn.cellpos.y == tempy))
				{
					Wumps.Ed.Movement(Flynn, Pits.Recognizer.cellpos.x, Pits.Recognizer.cellpos.y,
						Pits.Peter.cellpos.x, Pits.Peter.cellpos.y, size);
					Wumps.Sark.Movement(Flynn, Pits.Recognizer.cellpos.x, Pits.Recognizer.cellpos.y,
						Pits.Peter.cellpos.x, Pits.Peter.cellpos.y, size);
					Wumps.MCP.Movement(Flynn, Pits.Recognizer.cellpos.x, Pits.Recognizer.cellpos.y,
						Pits.Peter.cellpos.x, Pits.Peter.cellpos.y, size);
				}
				break;
			}
			else if ((input == "i") || (input == "k") || (input == "l") || (input == "j"))
			{
				Flynn.shoot(input, Wumps.Ed.cellpos);
				if (Flynn.hit == false)
				{
					Flynn.shoot(input, Wumps.Sark.cellpos);
					if (Flynn.hit == false)
					{
						Flynn.shoot(input, Wumps.MCP.cellpos);
					}
				}
				if (Flynn.hit == true)
				{
					Wumps.Ed.Movement(Flynn, Pits.Recognizer.cellpos.x, Pits.Recognizer.cellpos.y,
						Pits.Peter.cellpos.x, Pits.Peter.cellpos.y, size);
					Wumps.Sark.Movement(Flynn, Pits.Recognizer.cellpos.x, Pits.Recognizer.cellpos.y,
						Pits.Peter.cellpos.x, Pits.Peter.cellpos.y, size);
					Wumps.MCP.Movement(Flynn, Pits.Recognizer.cellpos.x, Pits.Recognizer.cellpos.y,
						Pits.Peter.cellpos.x, Pits.Peter.cellpos.y, size);
				}
				break;
			}
			else if (input == "gold")
			{
				system("cls");
				cout << "Gold: " << Flynn.gold << endl;
				system("pause");
				break;
			}
		}
		i = 0;
	}
}

void MainMenu()
{
	HSTXTFILE HighScore;
	string input;
	for (int i = 0; i < 2; i++)
	{
		system("cls");
		cout << "Main Menu\n1 Start Game\n2 High Score\n3 Clear Data\n0 Quit Game\nEnter Option: ";
		getline(cin, input);
		if (input == "1")
		{
			for (int i = 0; i < 2; i++)
			{
				system("cls");
				cout << "What size map do you want?\n1 Small\n2 Medium\n3 Large\nEnter Option: ";
				getline(cin, input);
				if (input == "1")
				{
					ZaGame(4);
					break;
				}
				else if (input == "2")
				{
					ZaGame(8);
					break;
				}
				else if (input == "3")
				{
					ZaGame(16);
					break;
				}
				else
				{
					i = 0;
				}
			}
			
		}
		else if (input == "2")
		{
			HighScore.display();
			system("pause");
		}
		else if (input == "3")
		{
			HighScore.cleardata();
			system("pause");
		}
		else if (input == "0")
		{
			break;
		}
		i = 0;
	}
}



int main()
{
	MainMenu();
	return 0;
}