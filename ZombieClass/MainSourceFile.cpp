/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File: ZombieClass																										   //
// Author: Logan Pletcher																									   //
// Date Created: 9/28/2015																						  			   //
// Brief: Creates a program that will create a random amount of zombies that will fight each other to the last zombie standing.//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Zombie.h"			//Links the Zombie header file to the MainSourceFile
#include <cstdlib>			//Is included to allow the use of the rand function.
#include <time.h>
using namespace std;

void ZombieCreation(Zombie Zambees[5])
{
	
	for (int i = 0; i < 5; i++)
	{
		srand(time(NULL));
		Zambees[i].PrevOcc(Zambees[i]);
		Zambees[i].OccBoosts(Zambees[i]);
	}
}



int main()
{
	srand(time(NULL));
	Zombie Zombies[5] = { { true, 20, rand() % 5 + 1 },
						  { true, 20, rand() % 5 + 1 },
						  { true, 20, rand() % 5 + 1 }, 
						  { true, 20, rand() % 5 + 1 }, 
						  { true, 20, rand() % 5 + 1 }, };
	ZombieCreation(Zombies);
battle:
	for (int i = 0; i < 5; i++)
	{
		cout << Zombies[i].alive << endl;
		if (Zombies[i].alive = true)
		{
			srand(time(NULL));
			int random2 = rand() % 5;
			while (Zombies[random2].alive == false || random2 == i)
			{
				random2 = rand() % 5;
			}
			Zombies[random2].StartHealth -= Zombies[i].StartAttack;
			cout << "Zombie " << i + 1 << " attacks Zombie " << random2 + 1 << ".\n";
			cout << "Zombie " << random2 + 1 << " takes " << Zombies[i].StartAttack << " damage.\n";
			Zombies[random2].Damage(Zombies[random2].StartHealth);
			cout << "Zombie " << random2 + 1 << " has " << Zombies[random2].StartHealth << " health left.\n";
			if (Zombies[random2].StartHealth <= 0)
			{
				cout << "Zombie " << random2 + 1 << " is slain.\n";
				Zombies[random2].alive = false;
				Zombies[random2].SecondDeath(Zombies[random2].alive);
			}
		}
		system("pause");
	}
	if (Zombies[0].alive == true &&
		Zombies[1].alive == false &&
		Zombies[2].alive == false &&
		Zombies[3].alive == false &&
		Zombies[4].alive == false)
	{
		cout << "Zombie 1 wins!\nOccupation: ";
		Zombies[0].Win(Zombies[0]);
	}
	else if (Zombies[0].alive == false &&
		Zombies[1].alive == true &&
		Zombies[2].alive == false &&
		Zombies[3].alive == false &&
		Zombies[4].alive == false)
	{
		cout << "Zombie 2 wins!\nOccupation: ";
		Zombies[1].Win(Zombies[1]);
	}
	else if (Zombies[0].alive == false &&
		Zombies[1].alive == false &&
		Zombies[2].alive == true &&
		Zombies[3].alive == false &&
		Zombies[4].alive == false)
	{
		cout << "Zombie 3 wins!\nOccupation: ";
		Zombies[2].Win(Zombies[2]);
	}
	else if (Zombies[0].alive == false &&
		Zombies[1].alive == false &&
		Zombies[2].alive == false &&
		Zombies[3].alive == true &&
		Zombies[4].alive == false)
	{
		cout << "Zombie 4 wins!\nOccupation: ";
		Zombies[3].Win(Zombies[3]);
	}
	else if (Zombies[0].alive == false &&
		Zombies[1].alive == false &&
		Zombies[2].alive == false &&
		Zombies[3].alive == false &&
		Zombies[4].alive == true)
	{
		cout << "Zombie 5 wins!\nOccupation: ";
		Zombies[4].Win(Zombies[4]);
	}
	else
	{
		goto battle;
	}
	system("pause");
	return 0;
}