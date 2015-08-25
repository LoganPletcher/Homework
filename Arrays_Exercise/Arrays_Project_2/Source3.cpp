#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int numNames = 5;
	char namearray[numNames][32];
	for (int i = 0; i < numNames; i++)
	{
		char name[100];
		cout << "Enter a name \n";
		//this will get all of the characters up to the carriage return key.
		//it will get the space which if you enter both a first and last name
		//will be needed
		cin.getline(name, 100);
		for (int j = 0; j < 32; j++)
		{
			namearray[i][j] = name[j];
		}
	}
	//loop through the input and print
	for (int i = 0; i < 5; i++)
	{
		cout << "Name: " << i << ": ";
		for (int j = strlen(namearray[i]); j >= 0; j--)
		{
			cout << namearray[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;

}