#include <iostream>

unsigned int Multiply(unsigned int x,unsigned int y)
{
	unsigned int result = 0;
	for (int i = 0; i != y; i++)
		{
			result += x;
		}
	return result;
}

int main()
{
	int gist = Multiply(-5, -4);
	std::cout << gist << std::endl;
	system("pause");
	return 0;
}