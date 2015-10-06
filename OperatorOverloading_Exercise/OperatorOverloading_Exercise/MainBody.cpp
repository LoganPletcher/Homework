//////////////////////////////////////////////////
// File: OperatorOverloading_Exercise			//
// Author: Logan Pletcher						//
// Date Created: 10/6/2015						//
// Brief: Creates a vector that overloads.		//
//////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "Vector2.h"
using namespace std;

int main()
{
	Vector2 first;
	Vector2 second;
	string input;
	cout << "Do you want to give values to the x or y of the first vector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			first.Initialise(first);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	system("cls");
	cout << "Do you want to give values to the x or y of the second vector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			second.Initialise(second);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}

	}
	system("cls");
	cout << "Do you want to see the data for the first vector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			first.Data(first);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	system("cls");
	cout << "Do you want to see the data for the second vector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			second.Data(second);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	system("cls");
	cout << "Do you want to add or subtract the values of the second vector to the first \nvector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			first.Addition(second);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	cout << "Do you want to see the data for the first vector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			first.Data(first);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	system("cls");
	cout << "Do you want to add or subtract the values of the first vector to the second \nvector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			second.Addition(first);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	system("cls");
	cout << "Do you want to see the data for the second vector?\nType in yes or no.\n";
	for (int i = 0; i < 2; i++)
	{
		getline(cin, input);
		if (input == "yes")
		{
			second.Data(second);
			i = 2;
		}
		else if (input == "no")
		{
			i = 2;
		}
		else
		{
			i = 0;
		}
	}
	return 0;
}