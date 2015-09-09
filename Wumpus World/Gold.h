#pragma once
class Gold
{
public:
	Gold(unsigned char, Coordinates);
	void surroundings(Coordinates);
	unsigned char goldsymbol;
	Coordinates goldposition;
	Coordinates left;
	Coordinates right;
	Coordinates up;
	Coordinates down;

private:
	
};

Gold::Gold(unsigned char gs, Coordinates gp)
{
	goldsymbol = gs;
	goldposition = gp;
}

void Gold::surroundings(Coordinates gp)
{
	left.x = gp.x;
	left.y = gp.y - 1;
	right.x = gp.x;
	right.y = gp.y + 1;
	up.x = gp.x - 1;
	up.y = gp.y;
	down.x = gp.x + 1;
	down.y = gp.y;
}