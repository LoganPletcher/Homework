#include <iostream>
#include <string>
using namespace std;

class Cultist
{
public:
	Cultist(string, int, int, int);
	void Stats();

private:
	string name;
	int HP;
	int Mana;
	int Rage;
};

Cultist::Cultist(string n, int h, int m, int r)
{
	name = n;
	HP = h;
	Mana = m;
	Rage = r;
}

void Cultist::Stats()
{
	cout << "Cultist " << name << " has " << HP << " health points, a mana pool of " << Mana << ", and a rage pool of " << Rage << "." << endl;
}

int main()
{
	Cultist PlayerOne("Baal Hadad", 500, 300, 300);
	PlayerOne.Stats();
	system("pause");
	return 0;
}