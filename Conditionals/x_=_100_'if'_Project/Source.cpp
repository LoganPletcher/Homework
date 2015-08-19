#include <iostream>
int main()
{
	//The goal of this program is to make an if statement that assings 100 to x when y is equal to zero
	int x; //The integer x, which is dependent on what value is assigned to the y integer
	int y = 0; //The integer y, which is independent of the x integer, and changes the x integer depending on what values you give the y integer
	std::cout << "If y = 0, then x = 100." << std::endl; //This message is to explain to the program user why x would be 100 or not
	if (y == 0) { //This is the result should the y integer equal zero
		std::cout << "y does = 0, so x = 100." << std::endl; //This message tells the user that the y integer is 0 and that the x integer is 100
		x = 100; //actually assigns a value of 100 to the x integer
	}
	else { //This is the result should the y integer not equal zero
		std::cout << "y does not = 0, so x does not = 100." << std::endl; //This message tells the user that the y integer is not 0 and that the x integer is not 100
		x = 125; //Assigns a value of 125 to the x integer
	}
	std::cin.get();
	return 0;
}