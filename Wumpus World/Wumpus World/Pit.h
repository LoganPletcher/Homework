#pragma once
using namespace std;
class Pit
{
public:
	Pit(unsigned char, Coordinates);
	unsigned char pitsymbol;
	Coordinates pitposition;
	Coordinates pUP;
	Coordinates pDOWN;
	Coordinates pLEFT;
	Coordinates pRIGHT;

private:

};

Pit::Pit(unsigned char ps, Coordinates pp)
{
	pitsymbol = ps;
	pitposition = pp;
	pUP = { pp.x - 1, pp.y };
	pDOWN = { pp.x + 1, pp.y };
	pLEFT = { pp.x, pp.y - 1};
	pRIGHT = { pp.x, pp.y + 1};
}