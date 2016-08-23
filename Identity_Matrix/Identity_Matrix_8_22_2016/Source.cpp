#include <iostream>

int main()
{
	int IDMatrix[2][2] = { {1, 0},{0, 1} };
	std::cout << IDMatrix[0][0] << " " << IDMatrix[0][1] << std::endl << IDMatrix[1][0] << " " << IDMatrix[1][1] << std::endl;
	system("pause");
	return 0;
}