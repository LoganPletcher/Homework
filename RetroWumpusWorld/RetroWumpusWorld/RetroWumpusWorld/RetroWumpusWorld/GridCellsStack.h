#ifndef GRIDCELLSSTACK_H
#define GRIDCELLSSTACK_H
#include <iostream>
#include <string>
using namespace std;

struct node
{
	int cellnum;
	int element;
	int cellx;
	int celly;
	string junk;
	node * next;
};

class Stack4Grid
{
public:
	Stack4Grid();
	void push(node &, node &);
	void pop(node &, node &);
	node Top;

private:

};

Stack4Grid::Stack4Grid()
{
	Top.cellnum = -1;
	Top.element = 0;
	Top.next = NULL;
}

void Stack4Grid::push(node &elem, node &elem2)
{
	this->Top.cellnum = elem.cellnum;
	this->Top.element = elem.element;
	this->Top.cellx = elem.cellx;
	this->Top.celly = elem.celly;
	if (elem2.element < 1)
	{
		this->Top.next = NULL;
	}
	else
	{
		elem2.next = this->Top.next;
		this->Top.next = &elem2;
	}
}

void Stack4Grid::pop(node &elem, node &elem2)
{
	if (Top.element > 0)
	{
		this->Top.element -= 1;
		this->Top.next = elem2.next;
		elem.next = NULL;
		if (Top.element > 0)
		{
			this->Top.cellnum = elem2.cellnum;
			this->Top.cellx = elem2.cellx;
			this->Top.celly = elem2.celly;
		}
		else
		{
			this->Top.cellnum = -1;
			this->Top.cellx = -1;
			this->Top.celly = -1;
		}
	}
}

#endif GRIDCELLSSTACK_H