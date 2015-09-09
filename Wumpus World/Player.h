#pragma once
struct Coordinates
{
	int x;
	int y;
};

struct Direction
{
	bool North;
	bool South;
	bool East;
	bool West;
};

class Player
{
public:
	Player(unsigned char, Coordinates, Direction);
	void Movement(char);
	void turn(char);
	unsigned char symbol;
	Coordinates position;
	Direction facing;
	bool havegold;

private:

};

Player::Player(unsigned char s, Coordinates p, Direction f)
{
	symbol = s;
	position = p;
	facing = f;
}

void Player::Movement(char key)
{
	switch (key)
	{
	case 119:
		position.x -= 1;
		break;
	case 115:
		position.x += 1;
		break;
	case 100:
		position.y += 1;
		break;
	case 97:
		position.y -= 1;
		break;
	default:
		break;
	}

	/*if (key == 119)
	{
		position.x -= 1;
	}
	else if (key == 115)
	{
		position.x += 1;
	}
	else if (key == 100)
	{
		position.y += 1;
	}
	else if (key == 97)
	{
		position.y -= 1;
	}*/
}
void Player::turn(char nesw)
{
	switch (nesw)
	{
	case 119:
		position.x -= 1;
		break;
	case 115:
		position.x += 1;
		break;
	case 100:
		position.y += 1;
		break;
	case 97:
		position.y -= 1;
		break;
	default:
		break;
	}
}