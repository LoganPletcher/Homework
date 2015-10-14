#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{
public:
	Player(int);
	Cells cellpos;
	void Movement(string);
	void shoot(string, Cells&);
	void dead(Cells, Cells, Cells, Cells, Cells);
	char playericon;
	int gold;
	bool alive;
	bool hit;
	int size;

private:
	
};

Player::Player(int s)
{
	size = s;
	playericon = 1;
	//cellpos = { 7, 0 };
	cellpos = { rand() % s, rand() % s };
	gold = 0;
	alive = true;
	hit = false;
}

void Player::Movement(string key)
{
	if (key == "w")
	{
		if (cellpos.x != 0)
		{
			cellpos.x -= 1;
		}
	}
	else if (key == "s")
	{
		if (cellpos.x != (size - 1))
		{
			cellpos.x += 1;
		}
	}
	else if (key == "d")
	{
		if (cellpos.y != (size - 1))
		{
			cellpos.y += 1;
		}
	}
	else if (key == "a")
	{
		if (cellpos.y != 0)
		{
			cellpos.y -= 1;
		}
	}
}

void Player::shoot(string key, Cells &w)
{
	if (key == "i")
	{
		if (w.x < cellpos.x && w.y == cellpos.y)
		{
			hit = true;
			gold += 1;
			w = { 0, rand() % size };
		}
	}
	else if (key == "k")
	{
		if (w.x > cellpos.x && w.y == cellpos.y)
		{
			hit = true;
			gold += 1;
			w = { 0, rand() % size };
		}
	}
	else if (key == "l")
	{
		if (w.y > cellpos.y && w.x == cellpos.x)
		{
			hit = true;
			gold += 1;
			w = { 0, rand() % size };
		}
	}
	else if (key == "j")
	{
		if (w.y < cellpos.y && w.x == cellpos.x)
		{
			hit = true;
			gold += 1;
			w = { 0, rand() % size };
		}
	}
}

void Player::dead(Cells w1, Cells w2, Cells w3, Cells p1, Cells p2)
{
	if (cellpos.x == w1.x && cellpos.y == w1.y)
	{
		alive = false;
	}
	else if (cellpos.x == w2.x && cellpos.y == w2.y)
	{
		alive = false;
	}
	else if (cellpos.x == w3.x && cellpos.y == w3.y)
	{
		alive = false;
	}
	else if (cellpos.x == p1.x && cellpos.y == p1.y)
	{
		alive = false;
	}
	else if (cellpos.x == p2.x && cellpos.y == p2.y)
	{
		alive = false;
	}
	else
	{
		alive = true;
	}
}

#endif PLAYER_H