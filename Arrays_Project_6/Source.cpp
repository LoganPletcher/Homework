#include <iostream>
#include <string>
using namespace std;
int main()
{
	char username[100];
	char password[9];
	int comparator = 4;
	char usr[4] = "usr";
	char winningpsswrd[9] = "P@55w0rd";
	cout << "Create a username: ";
	cin.getline(username, 100);
	if (strlen(username) < comparator)
	{
		cout << "Unusable username." << endl;
		system("pause");
		return 0;
	}
	else if (username[0] == usr[0])
	{
		if (username[1] == usr[1])
		{
			if (username[2] == usr[2])
			{
				cout << "Username available." << endl;
			}
			else
			{
				cout << "Unusable username." << endl;
				system("pause");
				return 0;
			}
		}
		else
		{
			cout << "Unusable username." << endl;
			system("pause");
			return 0;
		}
	}
	else
	{
		cout << "Unusable username." << endl;
		system("pause");
		return 0;
	}
	cout << "Now create a password: ";
	cin.getline(password, 100);
	if (strcmp(password, winningpsswrd) == 0)
	{
		cout << "Password is valid. You may continue." << endl;
	}
	else
	{
		cout << "Invalid password." << endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}