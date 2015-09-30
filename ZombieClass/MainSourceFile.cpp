/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File: ZombieClass																										   //
// Author: Logan Pletcher																									   //
// Date Created: 9/28/2015																						  			   //
// Brief: Creates a program that will create two zombies with random attack and health that will fight each other to the death.//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Zombie.h"			//Links the Zombie header file to the MainSourceFile
#include <cstdlib>			//Is included to allow the use of the rand function.
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));															//Clears the random value at the start of each run.
	Zombie Zombies[5];
	for (int i = 0; i < 5; i++)
	{
		Zombies[i].OccBonus();
		Zombies[i].ZombieInfo();
		cout << endl;
	}
	system("pause");
	system("cls");
	cout << "Battle, start!\n\n";
	int intRound = 1;
	while ( (Zombies[0].StartHealth > 0 && Zombies[1].StartHealth > 0)
		|| (Zombies[0].StartHealth > 0 && Zombies[2].StartHealth > 0)
		|| (Zombies[0].StartHealth > 0 && Zombies[3].StartHealth > 0)
		|| (Zombies[0].StartHealth > 0 && Zombies[4].StartHealth > 0)
		|| (Zombies[1].StartHealth > 0 && Zombies[2].StartHealth > 0)
		|| (Zombies[1].StartHealth > 0 && Zombies[3].StartHealth > 0)
		|| (Zombies[1].StartHealth > 0 && Zombies[4].StartHealth > 0)
		|| (Zombies[2].StartHealth > 0 && Zombies[3].StartHealth > 0)
		|| (Zombies[2].StartHealth > 0 && Zombies[4].StartHealth > 0)
		|| (Zombies[3].StartHealth > 0 && Zombies[4].StartHealth > 0))
	{
		
		cout << "Round " << intRound << ", start!\n\n";
		for (int i = 0; i < 5; i++)
		{
			cout << "Zombie " << i + 1 << "'s turn.\n\n";
			Zombies[i].ZombieInfo();
			if (Zombies[i].StartHealth > 0)
			{
				int rndm = rand() % 5;
				while (Zombies[rndm].StartHealth <= 0 || rndm == i)
				{
					rndm = rand() % 5;
				}
				cout << "Zombie " << i + 1 << " attacks Zombie " << rndm + 1 << ".\n\n";
				Zombies[i].Attacking(Zombies[rndm]);
			}
			else
			{
				cout << "Zombie " << i + 1 << " is dead.\n\n";
			}

		}
		intRound += 1;
		system("pause");
		system("cls");
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (Zombies[i].StartHealth > 0)
		{
			cout << "Zombie " << i + 1 << " wins!\n\n";
			Zombies[i].ZombieInfo();
			cout << "\nFatality!\n";
		}
	}
	system("pause");
	return 0;																	//end of program.
}