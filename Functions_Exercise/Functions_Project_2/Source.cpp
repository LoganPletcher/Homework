#include <iostream>
using namespace std;

float smallerOfTwo(float valueOne, float valueTwo) //Creates a float function that requires two float values
{
	if (valueOne < valueTwo) //Creates an if statement that will out put the lower of the two parameter values, this part in particular will output valueOne should valueOne be smaller than valueTwo
	{
		cout << "The smaller of the two numbers is " << valueOne << endl; //Outputs text to the screen followed by valueOne
	}
	else if (valueTwo < valueOne) //This part extends the if statement to output valueTwo should valueTwo be smaller than valueOne
	{
		cout << "The smaller of the two numbers is " << valueTwo << endl; //Outputs text to the screen followed by valueTwo
	}
	else //This is the last part of the if statement and will output text saying both valueOne and valueTwo are equal because the only way this part will be displayed is if the two parameter values are equal
	{
		cout << "Both numbers are of equal value." << endl; //Outputs text to the screen
	}
	return 0; //returns a value of 0 to the function
}

int main() //The main function that will allow the user to input what they will need to input
{
	float inputOne; //A float variable is created to store a value that will be needed in a couple of lines
	float inputTwo; //Another float variable is created to store a value that will be needed in a couple of lines
	cout << "You will be prompted to enter two values, one after the other. They can contain decimal numbers and can be either negative or positive." << endl; //Tells the user what they will be needing to do in the next few lines
	cout << "Please enter the first value." << endl; //Tells the user to enter the first value
	cin >> inputOne; //Allows the user to input the first value into the inputOne variable
	cout << "Now enter the second value." << endl; //Tells the user to enter the second value
	cin >> inputTwo; //Allows the user to input the second value into the inputTwo variable
	cout << "The program will now calculate and output the smaller of the two values you have entered into it." << endl; //Tells the user what the smallerOfTwo function will do
	smallerOfTwo(inputOne, inputTwo); //Sends the two float valuables to the smallerOfTwo function and sets them as the parameter values
	system("pause"); //Makes the program pause before it ends
	return 0; //returns a value of 0 to the main function
}