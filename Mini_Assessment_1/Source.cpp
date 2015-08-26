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
	for (int i = 0; i < 3; i++) //creates a for loop that will allow the user to input each part of their name into the 2D array
	{
		char name[100]; //creates a char string to hold a part of the name
		if (firstmidlast[i] == firstmidlast[0]) //creates an if statement which will activate when the user must input the first part of their name
		{
			cout << "Please input your first name: "; //Tells the user that they must input the first part of their name
			cin.getline(name, 100); //Allows the user to input the first part of their name
			for (int j = 0; j < 100; j++) //loops through each character in the char string name
			{
				firstmidlast[i][j] = name[j]; //inserts the characters for each name into the firstmidlast 2D array
			}
		}
		else if (firstmidlast[i] == firstmidlast[1]) //creates an if statement which will activate when the user must input the middle part of their name
		{
			cout << "Please input your middle name: "; //Tells the user that they must input the middle part of their name
			cin.getline(name, 100); //Allows the user to input the middle part of their name
			for (int j = 0; j < 100; j++) //loops through each character in the char string name
			{
				firstmidlast[i][j] = name[j]; //inserts the characters for each name into the firstmidlast 2D array
			}
		}
		else
		{
			cout << "Please input your last name: "; //Tells the user that they must input the last part of their name
			cin.getline(name, 100); //Allows the user to input the last part of their name
			for (int j = 0; j < 100; j++) //loops through each character in the char string name
			{
				firstmidlast[i][j] = name[j]; //inserts the characters for each name into the firstmidlast 2D array
			}
		}
	}
	asciiFunction(firstmidlast[0]); //Sends the char string firstmidlast[0] to the asciiFunction and assigns it to the char string strASCII
	asciiFunction(firstmidlast[1]); //Sends the char string firstmidlast[1] to the asciiFunction and assigns it to the char string strASCII
	asciiFunction(firstmidlast[2]); //Sends the char string firstmidlast[2] to the asciiFunction and assigns it to the char string strASCII
	system("pause"); //creates a pause for the system so the program does not shut down right after it is completed so the user may look at everything that was inputted and outputted
	return 0; //returns a value of zero to the main function
}