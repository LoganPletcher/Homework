#include <iostream>
int main()
{
	int num1;
	int num2;
	char mathopchar;
	int equationanswr;
	std::cout << "Input two numbers." << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "Now choose +, -, *, /, or % by inputing the character. ";
	std::cin >> mathopchar;
	if (mathopchar == 43) {
		equationanswr = num1 + num2;
		std::cout << num1 << " + " << num2 << " = " << equationanswr << std::endl;
	}
	else if (mathopchar == 45) {
		equationanswr = num1 - num2;
		std::cout << num1 << " - " << num2 << " = " << equationanswr << std::endl;
	}
	else if (mathopchar == 42) {
		equationanswr = num1 * num2;
		std::cout << num1 << " * " << num2 << " = " << equationanswr << std::endl;
	}
	else if (mathopchar == 47) {
		equationanswr = num1 / num2;
		std::cout << num1 << " / " << num2 << " = " << equationanswr << std::endl;
	}
	else if (mathopchar == 37) {
		equationanswr = num1 % num2;
		std::cout << num1 << " % " << num2 << " = " << equationanswr << std::endl;
	}
	else {
		std::cout << "You have entered a wrong mathematical operation character. Unable to properly complete program." << std::endl;
	}
	system("pause");
	return 0;
}