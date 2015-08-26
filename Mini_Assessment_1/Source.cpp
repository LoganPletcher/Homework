#include <iostream>
using namespace std; //allows me to use program commands without having to type "std::" in front of them

int asciiFunction(char strASCII[100]) //This function is made to convert an inputted string into it's ASCII equivalent
{
	for (int i = 0; i < strlen(strASCII); i++) //This for loop is made so that it outputs the ASCII equivalent for every character that is in the string
	{
		if (i == (strlen(strASCII) - 1)) //creates an if statement should i equal the last character of the char string
		{
			char smiley = 1; //sets a new char, smiley, to 1 to convert the last character of the char string to the smiley face symbol
			cout << smiley << endl; //outputs the char smiley
		}
		else
		{
			int asciiNums = strASCII[i]; //Converts to ASCII whatever character i currently represents in the string strASCII
			cout << asciiNums << endl; //Displays the ASCCI equivalent of the character
		}
		
	}
	return 0; //returns a value of zero to the asciiFunction function
	
}


int main() //The main body of the code
{
	char usersinput[100]; //A char string that will hold the plain text that the user will input, but can only hold up to 99 characters
	cout << "Input some text that you want to be converted to ASCII." << endl; //Outputs the orange text to the screen to instruct the user on what to do
	cin.getline(usersinput, 100); //Allows the user to input whatever characters they wish and this specific way of user input prompt allows the user to use spaces
	asciiFunction(usersinput); //Sends the char string usersinput to the asciiFunction and assigns it to the char string strASCII
	char firstmidlast[3][100]; //creates a 2D character array to hold a string for your first, middle, and last name each
	cout << "Type in and enter your first name: ";

	system("pause"); //creates a pause for the system so the program does not shut down right after it is completed so the user may look at everything that was inputted and outputted
	return 0; //returns a value of zero to the main function
}