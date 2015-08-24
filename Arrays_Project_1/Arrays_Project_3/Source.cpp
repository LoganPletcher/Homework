#include <iostream>
#include <string>
using namespace std;
int main()
{
	char name[5][16];
	char reverse[16];
	cout << "Type five names. Press the enter key after each name." << endl;
	cin >> name[0] >> name[1] >> name[2] >> name[3] >> name[4];
	cout << name[0] << endl << name[1] << endl << name[2] << endl << name[3] << endl << name[4] << endl;
	system("pause");
	return 0;
}