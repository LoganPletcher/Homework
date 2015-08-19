#include <iostream>
int main()
{
	for (int i = 0; i <= 100; i++) { //Setup to introduce the variable and so the variable can increase from 0 to 100 by increments of 1
		std::cout << i << std::endl; //Outputs the variable
		if ((i % 3 == 0 && i % 5 == 0) && i != 0) { //If the number is a variable of both 3 and 5 it will be followed by FizzBuzz
			std::cout << "FizzBuzz" << std::endl;
			continue;
		}
		if (i % 3 == 0 && i != 0) { //If the number is a variable of 3 it will be followed by Fizz
			std::cout << "Fizz" << std::endl;
			continue;
		}
		if (i % 5 == 0 && i != 0) { //If the number is a variable of 5 it will be followed by Buzz
			std::cout << "Buzz" << std::endl;
			continue;
		}
	}
	system("pause");
	return 0;
}