#include <iostream>
int main()
{
	int x, y; //declare variables
	x = 1; //assign a value to x
	y = (x == 0) ? 0 : 10 / x; //the ternary operation
	std::cout << y << std::endl; //to check to see if the operation successfully works when the program is run
	system("pause");
	return 0;
}