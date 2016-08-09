#include <iostream>
using namespace std;

template<class T>
struct Pointer
{
	T *parent;
};


//int main()
//{
//	int a, b;
//	Pointer ptrA, ptrB;
//	cin >> a;
//	cin >> b;
//	ptrA.parent = &a;
//	ptrB.parent = &b;
//	cout << "Pointer A value = " << *ptrA.parent << " stored in addess " << ptrA.parent << "\n";
//	cout << "Pointer B value = " << *ptrB.parent << " stored in addess " << ptrB.parent << "\n";
//	a++;
//	b--;
//	cout << *ptrA.parent << "\n";
//	cout << *ptrB.parent << "\n";
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a;
//	Pointer Max;
//	cout << "Enter a number between one and ten: ";
//	cin >> a;
//	if (a > 10)
//		a = 10;
//	else if (a < 1)
//		a = 1;
//	int* dataset = new int[a];
//	for (int i = 0; i < a ; i++)
//	{
//		cin >> dataset[i];
//	}
//	for (int i = 0; i < a; i++)
//	{
//		if (i == 0)
//			Max.parent = &dataset[i];
//		else if (dataset[i] > *Max.parent)
//			Max.parent = &dataset[i];
//	}
//	cout << "\n" << *Max.parent << "\n";
//	system("pause");
//	return 0;
//}

int main()
{
	char str[] = "A string";
	Pointer<char> strinG;
	strinG.parent = str;
	cout << str[0] << " " << *strinG.parent << " " << strinG.parent[3] << "\n";
	strinG.parent += 2;
	cout << *strinG.parent << " " << strinG.parent[2] << " " << strinG.parent[5] << "\n";
	system("pause");
	return 0;
}