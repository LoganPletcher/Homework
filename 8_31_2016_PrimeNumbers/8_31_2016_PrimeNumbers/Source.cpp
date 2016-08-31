#include <iostream>

bool MultipleChecker(const int &num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return true;
	}
	return false;
}

bool PrimeNumChecker(const int &num)
{
	if (num == 1 || num == 2)
		return true;
	if (!MultipleChecker(num))
		return true;
	return false;
}

void PrimesUnder100(bool(*function)(const int &))
{
	for (int i = 0; i < 100; i++)
	{
		if (function(i))
			std::cout << i << " is a prime number.\n";
	}
}

void PnMUnder1000(bool(*pFunction)(const int &))
{
	for (int i = 0; i < 1000; i++)
	{
		if (pFunction(i))
			std::cout << i << " is a prime number.\n";
	}
}

int main()
{
	PrimesUnder100(PrimeNumChecker);
	PnMUnder1000(PrimeNumChecker);
	system("pause");
	return 0;
}