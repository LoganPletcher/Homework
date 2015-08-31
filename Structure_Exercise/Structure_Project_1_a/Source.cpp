#include <iostream>
#include <string>
using namespace std;

struct Position
{
	float x;
	float y;
};

struct Velocity
{
	float size;
	float distance;
};

struct PlayerAttributes
{
	string Name;
	int Health;
	int Score;
	Position Position;
	Velocity Velocity;
};

PlayerAttributes Player1 = {"Bob", 100, 0, {10.0f,10.0f}, {1.0f,0.5f}};

void main()
{
	cout << "Name: " << Player1.Name << endl;
	cout << "Health: " << Player1.Health << endl;
	cout << "Score: " << Player1.Score << endl;
	cout << "Position: x: " << Player1.Position.x << " y: " << Player1.Position.y << endl;
	cout << "Velocity: size: " << Player1.Velocity.size << " distance: " << Player1.Velocity.distance << endl;
	system("pause");
}