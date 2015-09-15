#include <iostream>
using namespace std;

struct node
{
	node * successor;
	char name[100];
};

int main()
{
	node first;
	node second;
	first.successor = &second;


	system("pause");
	return 0;
}