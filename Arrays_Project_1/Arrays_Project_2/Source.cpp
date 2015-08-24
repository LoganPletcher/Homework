#include <iostream>
#include <string>
using namespace std;
int main()
{
	char name[32];
	char reverse[32];
	cout << "Type your First and Last name." << endl;
	cin.getline(name, 32);
	int strSize = strlen(name);

	for (int i = 0; i<strSize*0.5; ++i)
	{
		char ch = name[i];
		name[i] = name[(strSize - 1) - i];
		name[(strSize - 1) - i] = ch;
	}

	cout << name << endl;
	system("pause");
	return 0;
}