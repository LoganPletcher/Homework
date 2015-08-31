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

PlayerAttributes Players[5];

void CharacterCreation(PlayerAttributes Player[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Fill out character info for Player " << i + 1 << "." << endl;
		cout << "What is your name? (No spaces)" << endl;
		cin >> Player[i].PlayerName;
		Player[i].PlayerHealth = 100;
		cout << "What is your score? ";
		cin >> Player[i].PlayerScore;
		cout << endl;
		Player[i].PlayerPosition = { 0,0 };
		Player[i].PlayerVelocity = { 1, 5.0 };
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "This is the character information for Player " << i + 1 << "." << endl;
		cout << "Name: " << Player[i].PlayerName << endl;
		cout << "Score: " << Player[i].PlayerScore << endl;
		cout << endl;
	}
	char findname[100];
	cout << "Type in one of the player names to see their score. " << endl;
	cin >> findname;
	for (int i = 0; i > 5; i++)
	{
		if (strcmp(findname, Player[i].PlayerName) == 0)
		{
			cout << Player[i].PlayerName << "'s score is " << Player[i].PlayerScore << "." << endl;
		}
	}
}

int main()
{
	CharacterCreation(Players);
	
	system("pause");
	return 0;
}