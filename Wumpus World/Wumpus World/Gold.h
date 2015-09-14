#pragma once
using namespace std;
class Gold
{
public:
	Gold(unsigned char, Coordinates);
	unsigned char goldsymbol;
	Coordinates goldposition;
	Coordinates gUP;
	Coordinates gDOWN;
	Coordinates gLEFT;
	Coordinates gRIGHT;

private:

};

Gold::Gold(unsigned char gs, Coordinates gp)
{
	goldsymbol = gs;
	goldposition = gp;
	gUP = { gp.x - 1, gp.y };
	gDOWN = { gp.x + 1, gp.y };
	gLEFT = { gp.x, gp.y - 1 };
	gRIGHT = { gp.x, gp.y + 1 };
}