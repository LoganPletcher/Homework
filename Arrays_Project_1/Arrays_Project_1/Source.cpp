#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	char name[32];
	cout << "Type your First and Last name." << endl;
	cin.getline(name, 32);
	cout << name << endl;
	system("pause");
	return 0;
}