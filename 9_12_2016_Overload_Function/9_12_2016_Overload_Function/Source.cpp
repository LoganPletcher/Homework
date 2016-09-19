#include <iostream>

int addition(int x,int y)
{
	int result = x + y;
	return result;
}

int overloader(int func(int,int))
{
	////Attempt at overloading passed in function
	//func operator+(enum i);
	//The function could not be overloaded because the function itself is not an actual variable type
	// and so it cannot be overloaded like a variable type.

	int result = func(func(1,1), func(2,2));
	return result;
}

int main()
{
	int z = overloader(addition);
	std::cout << z << std::endl;
	system("pause");
	return 0;
}