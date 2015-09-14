#pragma once
using namespace std;
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
	Player(unsigned char, Coordinates, Direction, bool, bool);
	void Movement(char);
	void turn(char);
	unsigned char symbol;
	Coordinates position;
	Direction facing;
	bool havegold;
	bool havearrow;

private:

};

Player You{ 1,{ 3, 0 },{ true, false, false, false }, false, true };

Player::Player(unsigned char s, Coordinates p, Direction f, bool g, bool a)
{
	symbol = s;
	position = p;
	facing = f;
	havegold = g;
	havearrow = a;
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
}
void Player::turn(char nesw)
{
	switch (nesw)
	{
	case 117:
		cout << "YOU ARE NOW FACING NORTH" << endl;
		facing.North = true;
		facing.South = false;
		facing.East = false;
		facing.West = false;
		break;
	case 107:
		cout << "YOU ARE NOW FACING EAST" << endl;
		facing.North = false;
		facing.South = false;
		facing.East = true;
		facing.West = false;
		break;
	case 106:
		cout << "YOU ARE NOW FACING SOUTH" << endl;
		facing.North = false;
		facing.South = true;
		facing.East = false;
		facing.West = false;
		break;
	case 104:
		cout << "YOU ARE NOW FACING WEST" << endl;
		facing.North = false;
		facing.South = false;
		facing.East = false;
		facing.West = true;
		break;
	default:
		break;
	}
}