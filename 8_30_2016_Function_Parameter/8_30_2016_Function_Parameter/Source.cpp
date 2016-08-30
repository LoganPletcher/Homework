#include <iostream>

typedef int(*FuncArray) (int a); //Created a new type for making arrays that hold functions
int squared(int x)
{
	int product = x * x;
	return product;
}

void AddFuncToArray(int (*function)(int), FuncArray *intarray)
{
	intarray[0] = function;
}

int main()
{
	FuncArray Function[1];
	AddFuncToArray(squared, Function);
	std::cout << Function[0](5) << std::endl;
	system("pause");
	return 0;
}