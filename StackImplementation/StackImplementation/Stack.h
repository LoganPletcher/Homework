#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
using namespace std;
struct node
{
	string value;
	int element;
	node * next;
};

class Stack
{
public:
	Stack();
	void empty();
	void push(node &);
	void peek();
	void pop(node &, node &);
	void size();
	node Top;
		
private:

};

Stack::Stack()
{
	Top.value = "";
	Top.element = 0;
	Top.next = NULL;
}

void Stack::empty()
{
	system("cls");
	if (Top.element == 0)
	{
		cout << "The stack is empty.\n";
	}
	else
	{
		cout << "The stack is not empty.\n";
	}
	system("pause");
	system("cls");
}

void Stack::push(node &elem)
{
	if (Top.element < 55)
	{
		this->Top.value = elem.value;
		this->Top.element = elem.element;
		elem.next = this->Top.next;
		this->Top.next = &elem;
	}
}

void Stack::peek()
{
	system("cls");
	if (Top.element > 0)
	{
		cout << "The top element is element " << Top.value << ".\n";
	}
	else
	{
		cout << "There are no elements in the stack.\n";
	}
	system("pause");
	system("cls");
}

void Stack::pop(node &elem, node &elem2)
{
	if (Top.element > 0)
	{
		this->Top.element -= 11;
		this->Top.next = elem.next;
		elem.next = NULL;
		if (Top.element > 0)
		{
			this->Top.value = elem2.value;
		}
		else
		{
			this->Top.value = "";
		}
	}
}

void Stack::size()
{
	system("cls");
	cout << "The number of elements in the stack is " << Top.element / 11 << ".\n";
	system("pause");
	system("cls");
}

#endif STACK_H