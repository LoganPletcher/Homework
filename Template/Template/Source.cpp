//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File: Template																							//
// Author: Logan Pletcher																					//
// Date Created: 10/6/2015																					//
// Brief: -																									//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

template<typename T>
T Min(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	else if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

template<typename T>
T Max(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else if (a < b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

template<typename T>
T Clamp(T a, T b, T c)
{
	while (c < a || c > b)
	{
		if (c < a)
		{
			c++;
		}
		else
		{
			c--;
		}
	}
	return c;
}

template<typename T>
T MinSFC(T a, T b)
{
	if ((a >= 65 
		&& a <= 90) 
		&&(b >= 97
		&& b <= 122))
	{
		if (a + 32 < b)
		{
			return a;
		}
		else if (a + 32 > b)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
	else if ((a >= 97 
			&& a <= 122)
			&& (b >= 65
			&& b <= 90))
	{
		if (a < b + 32)
		{
			return a;
		}
		else if (a > b + 32)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
	else
	{
		if (a < b)
		{
			return a;
		}
		else if (a > b)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
}

template<typename T>
T MaxSFC(T a, T b)
{
	if ((a >= 65
		&& a <= 90)
		&& (b >= 97
			&& b <= 122))
	{
		if (a + 32 > b)
		{
			return a;
		}
		else if (a + 32 < b)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
	else if ((a >= 97
		&& a <= 122)
		&& (b >= 65
			&& b <= 90))
	{
		if (a > b + 32)
		{
			return a;
		}
		else if (a < b + 32)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
	else
	{
		if (a > b)
		{
			return a;
		}
		else if (a < b)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
}

int main()
{
	srand(time(NULL));
	int i = Min(123, 43);
	cout << i << endl;
	float j = Max(12345, 3434);
	cout << j << endl;
	float k = Clamp<float>(i, j, rand() % 30 + rand() % 20 + 30);
	cout << k << endl;
	char l = MinSFC<char>(102, 76);
	cout << l << endl;
	char m = MaxSFC<char>(70, 108);
	cout << m << endl;
	system("pause");
	return 0;
}