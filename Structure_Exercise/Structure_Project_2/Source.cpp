#include <iostream>
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
	char PlayerName[100];
	int PlayerHealth;
	int PlayerScore;
	Position PlayerPosition;
	Velocity PlayerVelocity;
};

void main()
{
	PlayerAttributes PlayerOne;
	cout << "Who are you?" << endl;
	cin.getline(PlayerOne.PlayerName, 100);
	PlayerOne.PlayerHealth = 100;
	cout << "What is your score? ";
	cin >> PlayerOne.PlayerScore;
	PlayerOne.PlayerPosition = { 0,0 };
	PlayerOne.PlayerVelocity = { 1, 5.0 };
	cout << "This is your character information." << endl;
	cout << "Name: " << PlayerOne.PlayerName << endl;
	cout << "Health: " << PlayerOne.PlayerHealth << endl;
	cout << "Score: " << PlayerOne.PlayerScore << endl;
	cout << "Position: x: " << PlayerOne.PlayerPosition.x << " y: " << PlayerOne.PlayerPosition.y << endl;
	cout << "Velocity: size: " << PlayerOne.PlayerVelocity.size << " distance: " << PlayerOne.PlayerVelocity.distance << endl;
	system("pause");
}