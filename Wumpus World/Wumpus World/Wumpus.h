#pragma once
using namespace std;
class Wumpus
{
public:
	Wumpus(unsigned char, Coordinates, bool);
	unsigned char wumpussymbol;
	void WumpusShot(Wumpus);
	Coordinates wumpusposition;
	Coordinates wUP;
	Coordinates wDOWN;
	Coordinates wLEFT;
	Coordinates wRIGHT;
	bool wAlive;

private:

};

Wumpus::Wumpus(unsigned char ws, Coordinates wp, bool wa)
{
	wumpussymbol = ws;
	wumpusposition = wp;
	wAlive = wa;
	wUP = { wp.x - 1, wp.y };
	wDOWN = { wp.x + 1, wp.y };
	wLEFT = { wp.x, wp.y - 1 };
	wRIGHT = { wp.x, wp.y + 1 };
}

void Wumpus::WumpusShot(Wumpus m)
{
	cout << "YOU SHOT THE WUMPUS" << endl;
	wumpusposition = { 5, 5 };
	wAlive = false;
	You.havearrow = false;
	system("pause");
	system("cls");
}