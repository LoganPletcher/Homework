#include <iostream>
#include <string>
using namespace std;


struct Attributes
{
	string name;
	int health_points;
	int energy;
	int mana;
	int attack_power;
	int defense;
	int armor;
};

Attributes Players[2];

void HealthAverage(int health1, int health2)
{
	int averageHP;
	averageHP = (health1 + health2) / 2;
	cout << "The average HP for the fighters is " << averageHP << " HP." << endl;
}

void CharacterCreation(Attributes Player[])
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Create Fighter " << i + 1 << "." << endl;
		cout << "What is your name? (No spaces)" << endl;
		cin >> Player[i].name;
		cout << "How much health do you have?" << endl;
		cin >> Player[i].health_points;
		cout << "How much energy do you have?" << endl;
		cin >> Player[i].energy;
		cout << "How much mana do you have?" << endl;
		cin >> Player[i].mana;
		Player[i].mana = 0;
		cout << "What is your attack power?" << endl;
		cin >> Player[i].attack_power;
		cout << "What is your defense?" << endl;
		cin >> Player[i].defense;
		cout << "What is your armor rating?" << endl;
		cin >> Player[i].armor;
		cout << endl;
	}
	HealthAverage(Player[0].health_points, Player[1].health_points);
}

int main()
{
	CharacterCreation(Players);
	system("pause");
	return 0;
}