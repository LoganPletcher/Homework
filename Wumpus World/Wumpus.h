#pragma once
class Wumpus
{
public:
	Wumpus(unsigned char, Coordinates);
	void surroundings(Coordinates);
	unsigned char wumpussymbol;
	Coordinates wumpusposition;
	Coordinates left;
	Coordinates right;
	Coordinates up;
	Coordinates down;

private:

};

Wumpus::Wumpus(unsigned char ws, Coordinates wp)
{
	wumpussymbol = ws;
	wumpusposition = wp;
}

void Wumpus::surroundings(Coordinates wp)
{
	left.x = wp.x;
	left.y = wp.y - 1;
	right.x = wp.x;
	right.y = wp.y + 1;
	up.x = wp.x - 1;
	up.y = wp.y;
	down.x = wp.x + 1;
	down.y = wp.y;
}
