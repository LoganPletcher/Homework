#pragma once

class Pit
{
public:
	Pit(unsigned char, Coordinates);
	void surroundings(Coordinates);
	unsigned char pitsymbol;
	Coordinates pitposition;
	Coordinates left;
	Coordinates right;
	Coordinates up;
	Coordinates down;

private:
	
};

Pit::Pit(unsigned char ps, Coordinates pp)
{
	pitsymbol = ps;
	pitposition = pp;
}
 
void Pit::surroundings(Coordinates pp)
{
	left.x = pp.x;
	left.y = pp.y - 1;
	right.x = pp.x;
	right.y = pp.y + 1;
	up.x = pp.x - 1;
	up.y = pp.y;
	down.x = pp.x + 1;
	down.y = pp.y;
}