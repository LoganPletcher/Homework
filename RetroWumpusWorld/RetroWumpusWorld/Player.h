#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{
public:
	Player();
	Cells cellpos;
	void Movement(string);
	char playericon;

private:
	
};

Player::Player()
{
	playericon = 1;
	//cellpos = { 7, 0 };
	cellpos = { rand() % 8, rand() % 8 };
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
		if (cellpos.x != 7)
		{
			cellpos.x += 1;
		}
	}
	else if (key == "d")
	{
		if (cellpos.y != 7)
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

#endif PLAYER_H