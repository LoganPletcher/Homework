#include <iostream>
int main()
{
	int a;
	int b;
	int input1;
	int input2;
	std::cout << "Input two different numbers for a and b respectively." << std::endl;
	std::cin >> input1;
	std::cin >> input2;
	a = input1;
	b = input2;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Now, a and b shall be switched." << std::endl;
	a = input2;
	b = input1;
	std::cout << "a is now " << a << ", b is now " << b << std::endl;
	system("pause");
	return 0;
}