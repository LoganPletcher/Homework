#include <iostream>

typedef int(*FuncArray) (int a); //Created a new type for making arrays that hold functions
int squared(int x)
{
	int product = x * x;
	return product;
}

void NULLING(int size, FuncArray *intarray)
{
	for (int i = 0; i < size; i++)
	{
		intarray[i] = NULL;
	}
}

void AddIntFuncToArray(int (*function)(int), FuncArray *intarray, int arraysize)
{
	for (int i = 0; i < arraysize; i++)
	{
		if (intarray[i] == NULL)
		{
			intarray[i] = function;
			break;
		}
	}
	
}

int main()
{
	FuncArray Function[4];
	int size = (sizeof(Function) / sizeof(*Function));
	NULLING(size, Function);
	AddIntFuncToArray(squared, Function, size);
	std::cout << Function[0](5) << std::endl;
	AddIntFuncToArray(squared, Function, size);
	std::cout << Function[1](10) << std::endl;
	system("pause");
	return 0;
}