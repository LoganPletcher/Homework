#include <iostream>
int main()
{
	char frstltr;
	char scndltr;
	char midltr;
	std::cout << "Input two capital letters when prompted." << std::endl;
	std::cout << "Input the first capital letter: ";
	std::cin >> frstltr;
	std::cout << "Input the second capital letter: ";
	std::cin >> scndltr;
	midltr = (frstltr + scndltr) / 2;
	std::cout << "The letter sort of halfway between both letters is " << midltr << std::endl;
	system("pause");
	return 0;
}