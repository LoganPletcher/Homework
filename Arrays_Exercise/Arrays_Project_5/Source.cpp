#include <iostream>
#include <string>
using namespace std;
int main()
{
	char username[100];
	char password[100];
	int comparator = 8;
	bool capitalltr = false;
	bool numbers = false;
	bool symbols = false;
	cout << "Create your username: ";
	cin.getline(username, 100);
	cout << username << " accepted." << endl;
	cout << "Create a proper password. Password must be at least 8 characters long and needs to have at least one uppercase letter, at least one number, and at least one symbol." << endl;
	cin.getline(password, 100);
	int passwordlen = strlen(password);
	for (int i = 0; i < passwordlen; i++)
	{
		if ((char)password[i] >= 65 && (char)password[i] <= 90)
		{
			capitalltr = true;
		}
		if (((char)password[i] >= 33 && (char)password[i] <= 47) || ((char)password[i] >= 58 && (char)password[i] <= 64) || ((char)password[i] >= 91 && (char)password[i] <= 96) || ((char)password[i] >= 123 && (char)password[i] <= 126))
		{
			symbols = true;
		}
		if ((char)password[i] >= 48 && (char)password[i] <= 57)
		{
			numbers = true;
		}

	}
	if (passwordlen >= comparator)
	{
		if (symbols == true && numbers == true && capitalltr == true)
		{
					cout << "Password is valid. You may continue." << endl;
		}
		else
		{
			cout << "Password is invalid." << endl;
		}
	}
	else
	{
		cout << "Password is invalid." << endl;
	}
	system("pause");
	return 0;
}