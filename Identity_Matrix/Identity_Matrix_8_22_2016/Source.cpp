#include <iostream>

void IDMatrixCreator(int num, int *mat)
{
	int oneCount = 0;
	for (int i = 0; i < num*num; i+=num)
	{
		for (int j = i; j < i+num; j++)
		{
			if (j == i + oneCount)
				mat[j] = 1;
			else
				mat[j] = 0;
		}
		oneCount++;
	}
}

int main()
{
	int IDMatrix[9];
	IDMatrixCreator(3, IDMatrix);
	for (int i = 0; i < 9; i += 3)
	{
		for (int j = i; j < i + 3; j++)
			std::cout << IDMatrix[j] << ",";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}