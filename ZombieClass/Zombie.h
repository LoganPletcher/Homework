#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>
#include <cstdlib>			//Is included to allow the use of the rand function.
#include <time.h>
using namespace std;

class Zombie			//The class set up to process the data that coincides with a zombie and dictates how it acts.
{
public:
	Zombie();
	void Attacking(Zombie &);
	int StartHealth;
	int StartAttack;
	void ZombieInfo();
	void OccBonus();
	
	

private:
	int Health;
	int Attack;
	string strOccupation;
};
Zombie::Zombie()
{
	StartHealth = rand() % 6 + 20;
	StartAttack = rand() % 10 + 1;
	int random = rand() % 5;
	switch (random)
	{
	case 0:
		strOccupation = "Peasant";
		break;
	case 1:
		strOccupation = "Thug";
		break;
	case 2:
		strOccupation = "Knight";
		break;
	case 3:
		strOccupation = "Wizard";
		break;
	case 4:
		strOccupation = "Cultist";
		break;
	default:
		break;
	}
}

void Zombie::Attacking(Zombie &zz)
{
	zz.StartHealth -= this->StartAttack;
}
void Zombie::ZombieInfo()
{
	
	Health = StartHealth;
	cout << "This zombie has " << Health << " health." << endl;
	Attack = StartAttack;
	cout << "This zombie dishes out " << Attack << " damage." << endl;
	cout << "This zombie was a " << strOccupation 
		<< " before he died." << endl;
}
void Zombie::OccBonus()
{
	if (strOccupation == "Thug")
	{
		StartAttack += 4;
	}
	else if (strOccupation == "Knight")
	{
		StartAttack += 6;
		StartHealth += 5;
	}
	else if (strOccupation == "Wizard")
	{
		StartAttack += 8;
		StartHealth += 10;
	}
	else if (strOccupation == "Cultist")
	{
		StartAttack += 10;
		StartHealth += 20;
	}
	else
	{
		StartAttack += 2;
	}
}
#endif ZOMBIE_H