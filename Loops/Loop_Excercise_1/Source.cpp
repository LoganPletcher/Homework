#include <iostream>
int main()
{
	int i; //Creating a variable for the loop to use
	for (i = 100; i != -1; i--) { //Setup for the program so that it outputs the numbers 100 to 0 in decreasing order
		if (i < 0) { //if failsafe in case i is decrementing at a rate larger than 1 so that it does not out put a negative number
			break;
		}
		std::cout << i << std::endl; //Outputs i which decreses in number ever cycle
	}
	
	system("pause");
	return 0;
}