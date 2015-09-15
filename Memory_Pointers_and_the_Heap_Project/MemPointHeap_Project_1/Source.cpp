#include <iostream>
using namespace std;

int main()
{
	char blocks[3] = { 'A','B','C' };
	char *ptr = &blocks[0];
	cout << *ptr << endl; //A
	char temp;
	temp = blocks[0];
	cout << temp << endl; //A
	temp = *(blocks + 2);
	cout << temp << endl; //C
	temp = *(ptr + 1);
	cout << temp << endl; //B
	temp = *ptr;
	cout << temp << endl; //A
	ptr = blocks + 1;
	cout << *ptr << endl; //B
	temp = *ptr;
	cout << temp << endl; //B
	temp = *(ptr + 1);
	cout << temp << endl; //C
	ptr = blocks;
	cout << *ptr << endl; //A
	temp = *++ptr;
	cout << temp << endl; //B
	temp = ++*ptr;
	cout << temp << endl; //C
	temp = *ptr++;
	cout << temp << endl; //C
	temp = *ptr;
	cout << temp << endl; //C

	system("pause");
	return 0;
}