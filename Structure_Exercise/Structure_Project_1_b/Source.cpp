#include <iostream>
using namespace std;

struct corner
{
	int x;
	int y;
};

struct color
{
	int RED;
	int GRN;
	int BLU;
};

struct Hitbox
{
	corner point1;
	corner point2;
	corner point3;
	corner point4;
	color Playercolor;
};

Hitbox Player1HB = {
	{1,1}, 
	{3,1}, 
	{3,4}, 
	{1,4}, 
	{0, 255, 0}
};

void main()
{
	cout << "The RGB values of the Player 1 Hitbox is Red: " << Player1HB.Playercolor.RED << " Green: " << Player1HB.Playercolor.GRN << " Blue: " << Player1HB.Playercolor.BLU << endl;
	system("pause");
}