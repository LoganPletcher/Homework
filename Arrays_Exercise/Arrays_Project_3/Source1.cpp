#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int nameAmount = 5; //set the amount of names I want
	char nameArray[nameAmount][32]; //creates the 2d array used for all the names that will be created
	cout << "Type in five names." << endl; //tells the user what to do
	for (int i = 0; i < nameAmount; i++) //sets up the first nested for loop
	{
		char names[32]; //creates the char that will store the names the user will input
		cin.getline(names, 32); //allows the user to input characters
		for (int j = 0; j < 32; j++) //loops through each name in nameArray
		{
			nameArray[i][j] = names[j]; //inserts the characters for each name into the nameArray size
		}
	}
	for (int i = 0; i < nameAmount; i++) //loop determines which names will be displayed backwards
	{
		for (int j = strlen(nameArray[i]); j >= 0; j--) //gets the reverse of the name
		{
			cout << nameArray[i][j];//outputs the reversed name
		}
		cout << endl;
	}
	system("pause");
	return 0;
}