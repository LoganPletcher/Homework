#include <iostream>
int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	std::cout << "Please type five whole numbers." << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	std::cin >> num4;
	std::cin >> num5;
	int total = num1 + num2 + num3 + num4 + num5;
	std::cout << "The total of the numbers is: " << total << std::endl;
	int avrg = total / 5;
	std::cout << "The average of the numbers is: " << avrg << std::endl;
	system("pause");
	return 0;
}