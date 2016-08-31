#include <iostream>

bool PrimeNumChecker(const int &num)
{
	bool PrimeCheck = true;
	for (int i = 1; i < 10; i++)
	{
		if (!((i == 1)||(i == num)))
			if(num % i == 0)
				PrimeCheck = false;
	}
	return PrimeCheck;
}

void PrimesUnder100(bool (*function)(const int &))
{
	for (int i = 0; i < 100; i++)
	{
		if (function(i))
			std::cout << i << " is a prime number.\n";
	}
}

void NULLING(const int &size, int *intarray)
{
	for (int i = 0; i < size; i++)
	{
		intarray[i] = NULL;
	}
}

bool MultipleChecker(const int &num, const int &y, int *intarray)
{
	int arraycounter = 0;
	bool MultipleCheck = false;
	for (int i = 1; i < y+1; i++)
	{
		if ((i > num) && (i % num == 0))
		{
			MultipleCheck = true;
			intarray[arraycounter] = i;
			arraycounter++;
		}
	}
	return MultipleCheck;
}

void PnMUnder1000(bool(*pFunction)(const int &), bool(*mFunction)(const int &,const int &, int *), void (*NULLER)(const int &, int *))
{
	int multipleholder[1000];
	int size = (sizeof(multipleholder) / sizeof(*multipleholder));
	for (int i = 0; i < size; i++)
	{
		
		if (pFunction(i))
		{
			NULLER(size, multipleholder);
			if (mFunction(i, size, multipleholder))
			{
				std::cout << i << " is a prime number and is a multiple of the following numbers : ";
				for (int i = 0; i < size; i++)
				{
					if (multipleholder[i] != NULL)
						std::cout << multipleholder[i] << ", ";
				}
				std::cout << "\n\n";
			}
			else
				std::cout << i << " is a prime number and isn't a multiple of any numbers under 1000.\n\n";
		}
	}
}

int main()
{
	PrimesUnder100(PrimeNumChecker);
	PnMUnder1000(PrimeNumChecker, MultipleChecker, NULLING);
	system("pause");
	return 0;
}