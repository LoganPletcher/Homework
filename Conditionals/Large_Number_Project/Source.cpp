#include <iostream>
int main()
{
	//The goal of this program is to be able to prompt the user to input two different numbers and output the large of the two inputted numbers
	int num1;
	int num2;
	std::cout << "Please input two different numbers." << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "The larger number is: ";
	if (num1 > num2) {
		std::cout << num1 << std::endl;
	}
	else {
		std::cout << num2 << std::endl;
	}
	system("pause");
	return 0;
}