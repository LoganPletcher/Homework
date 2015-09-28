#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <cstdlib>		//Is included to allow the use of the rand function.
#include <time.h>
using namespace std;
struct Occupation		//A struct to set up the possible previous occupations of the Zombie
{
	bool Peasant;		//A peasant, lowest of the low.
	bool Thug;			//A thug, a measly scoundrel.
	bool Knight;		//A knight, an honorable warrior.
	bool Wizard;		//A wizard, a mighty caster of spells!
	bool Cultist;		//A cultist, the best of the best.
};

class Zombie			//The class set up to process the data that coincides with a zombie and dictates how it acts.
{
public:
	Zombie(bool, int, int);
	void PrevOcc(Zombie);
	void OccBoosts(Zombie);
	void Damage(int);
	void SecondDeath(bool);
	void Win(Zombie);
	bool alive;
	int StartHealth;
	int StartAttack; // rand() % 5 + 1;
	

private:
	int Health;				//The Zombie's health, always starts at 20.
	int Attack;				//The Zombie's attack value, is either 1, 2, 3, 4, or 5 without occupation bonuses.
	Occupation Previous;	//The struct Occupation to link the variables to the zombie.
};

Zombie::Zombie(bool a, int sh, int sa)
{
	alive = a;
	StartHealth = sh;
	Health = StartHealth;
	StartAttack = sa;
	Attack = StartAttack;
}

void Zombie::PrevOcc(Zombie z)
{
	srand(time(NULL));
	int randomOcc = rand() % 5;
	switch (randomOcc)
	{
	case 0:
		Previous.Peasant = true;
		Previous.Thug = false;
		Previous.Knight = false;
		Previous.Wizard = false;
		Previous.Cultist = false;
		break;
	case 1:
		Previous.Peasant = false;
		Previous.Thug = true;
		Previous.Knight = false;
		Previous.Wizard = false;
		Previous.Cultist = false;
		break;
	case 2:
		Previous.Peasant = false;
		Previous.Thug = false;
		Previous.Knight = true;
		Previous.Wizard = false;
		Previous.Cultist = false;
		break;
	case 3:
		Previous.Peasant = false;
		Previous.Thug = false;
		Previous.Knight = false;
		Previous.Wizard = true;
		Previous.Cultist = false;
		break;
	case 4:
		Previous.Peasant = false;
		Previous.Thug = false;
		Previous.Knight = false;
		Previous.Wizard = false;
		Previous.Cultist = true;
		break;
	default:
		break;
	}
}

void Zombie::OccBoosts(Zombie thing)
{
	if (Previous.Thug = 1)
	{
		StartAttack += 4;
	}
	else if (Previous.Knight = 1)
	{
		StartAttack += 6;
		StartHealth += 5;
	}
	else if (Previous.Wizard = 1)
	{
		StartAttack += 8;
		StartHealth += 10;
	}
	else if (Previous.Cultist = 1)
	{
		StartAttack += 10;
		StartHealth += 20;
	}
	else
	{
		StartAttack += 2;
	}
}

void Zombie::Damage(int H)
{
	Health = H;
}

void Zombie::SecondDeath(bool a)
{
	alive = a;
}

void Zombie::Win(Zombie thing)
{
	if (Previous.Peasant == 1)
	{
		cout << "Peasant\n";
	}
	else if (Previous.Thug == 1)
	{
		cout << "Thug\n";
	}
	else if (Previous.Knight == 1)
	{
		cout << "Knight\n";
	}
	else if (Previous.Wizard == 1)
	{
		cout << "Wizard\n";
	}
	else
	{
		cout << "Cultist";
	}
	cout << "Remaining Health: "
		<< Health << "\nDamage per Attack: "
		<< StartAttack << endl;
}

#endif ZOMBIE_H