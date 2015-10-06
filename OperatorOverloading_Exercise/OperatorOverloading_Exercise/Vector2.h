#ifndef VECTOR2_H
#define VECTOR2_H
#include <iostream>
#include <string>
using namespace std;
class Vector2
{
public:
	Vector2();
	 float Initialise(Vector2 &);
	 void Data(Vector2);
	 Vector2 Addition(Vector2 &);
	 void compare(Vector2);

private:
	float x, y;
};

Vector2::Vector2()
{
	x = 0;
	y = 0;
}

float Vector2::Initialise(Vector2 &vec)
{
	system("cls");
	cout << "Initialise x: ";
	cin >> x;
	cout << "Initialise y: ";
	cin >> y;
	return vec.x && vec.y;
}

void Vector2::Data(Vector2 vect)
{
	system("cls");
	cout << "x = " << vect.x << endl;
	cout << "y = " << vect.y << endl;
	system("pause");
}

Vector2 Vector2::Addition(Vector2 &vec)
{
	string input;
	cout << "Do you wish to add or subtract?\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "add")
		{
			this->x += vec.x;
			this->y += vec.y;
			i = 2;
		}
		else if (input == "subtract")
		{
			this->x -= vec.x;
			this->y -= vec.y;
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	return *this;
}

void Vector2::compare(Vector2 vect)
{
}
#endif VECTOR2_H