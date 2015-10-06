//////////////////////////////////////////////////////////////////////////////////////////
// File: StackImplementation															//
// Author: Logan Pletcher																//
// Date Created: 9/30/2015																//
// Brief: Creates a program that will implement a stack and recreate what a stack does.	//
//////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;



void MessinWitDaStack(Stack theStack, node arr[5])
{
	for (int i = 0; i < 2; i++)
	{
		string input;
		cout << "What do you want to do with the stack?\n";
		cout << "Push an element? (Type: Push)\n";
		cout << "Check the top element? (Type: Peek)\n";
		cout << "Pop an element? (Type: Pop)\n";
		cout << "Check how many elements are in the stack? (Type: Size)\n";
		cout << "See if the stack is empty? (Type: Empty)\n";
		cout << "Exit the program? (Type: Exit)\n";
		getline(cin, input);
		if (input == "Push")
		{
			for (int j = 0; j < 5; j++)
			{
				if (theStack.Top.element + 11 == arr[j].element)
				{
					theStack.push(arr[j]);
					break;
				}
			}
			i = 0;
			system("cls");
		}
		else if (input == "Peek")
		{

			theStack.peek();
			i = 0;
		}
		else if (input == "Pop")
		{
			for (int j = 0; j < 5; j++)
			{
				if (theStack.Top.element == arr[j].element)
				{
					theStack.pop(arr[j], arr[j-1]);
					break;
				}
			}
			i = 0;
			system("cls");
		}
		else if (input == "Size")
		{
			theStack.size();
			i = 0;
		}
		else if (input == "Empty")
		{
			theStack.empty();
			i = 0;
		}
		else if (input == "Exit")
		{
			i = 2;
		}
		else
		{
			system("cls");
			cout << "Invalid Input\n";
			i = 0;
		}
	}
}

int main()
{
	Stack MuhStack;
	node Array[5];
	Array[0] = { "A", 11 };
	Array[1] = { "B", 22 };
	Array[2] = { "C", 33 };
	Array[3] = { "D", 44 };
	Array[4] = { "E", 55 };
	MessinWitDaStack(MuhStack, Array);
	return 0;
}