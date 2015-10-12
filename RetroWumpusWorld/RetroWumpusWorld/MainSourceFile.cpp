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
#include "Gold.h"
#include "HighScoreTXTFile.h"
#include "Grid.h"
using namespace std;

void ZaGame()
{
	srand(time(NULL));
	string input;
	Grid theGrid;
	AllWumps Wumps;
	Allpits Pits;
	Player Flynn;
	Wumps.Ed.Wumpuspos(Flynn);
	Wumps.Sark.Wumpuspos(Flynn);
	Wumps.MCP.Wumpuspos(Flynn);
	Pits.Recognizer.Pitpos(Flynn, Wumps);
	Pits.Peter.Pitpos(Flynn, Wumps);
	for (int i = 0; i < 2; i++)
	{
		system("cls");
		cout << "Move your character by entering the 'w', 's', 'd', or 'a' key.\n";
		cout << "'w' moves you up, 's' moves you down,\n'd' moves you right, and 'a' moves you left.\n";
		theGrid.griddisplay(Flynn, Pits, Wumps);
		cout << "\nEnter character: ";
		getline(cin, input);
		for (int j = 0; j < 2; j++)
		{
			if ((input == "w") || (input == "s") || (input == "d") || (input == "a"))
			{
				Flynn.Movement(input);
				Wumps.Ed.Movement(Flynn);
				Wumps.Sark.Movement(Flynn);
				Wumps.MCP.Movement(Flynn);
				break;
			}
			else
			{
				getline(cin, input);
				j = 0;
			}
		}
		i = 0;
	}
}





int main()
{
	ZaGame();
	return 0;
}