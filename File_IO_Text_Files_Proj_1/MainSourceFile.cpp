////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File: File I/O: Text Files Exercise 1																  //
// Author: Logan Pletcher																				  //
// Date Created: 9/21/2015																				  //
// Brief: Creates a program that will allow a user to view and alter a text file from the command console.//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>														//Allows the programmer to perform text file operations in the program.
#include <string>														//Allows the programmer to use string variables in their code.
using namespace std;													//Allows the programmer to make the code simpler by not coding "std::" in front of various operations.

int main()
{
	int input;															//A char variable for processing a users input.
	string text;														//A string variable for when the user wishes to have the contents of the text file printed to the command console.
	string fileinput;													//A string for when the user wishes to add something to the text file.
	fstream file;														//An fstream is created to have "file" represent the contents of the text file in the code.
	file.open("MyLog.txt");												//Opens the text file MyLog to be altered and such.
	file.close();														//Closes the text file MyLog.
	for (int i = 0; i < 2; i++)											//A for loop is created so that the choices and following orange text are repeated until the user exits the program.
	{
		system("cls");													//Clears the text on the command console's screen.
		cout << "Welcome user to MyLog text file manipulator.\n"		//Prints to the command console's screen the text in orange.
			<< "Please choose what to do from the following list.\n"	//The numbered words are to tell the user what choices he has to choose from.
			<< "1 Display\n2 Write\n3 Clear\n0 Exit\n";
		cin >> input;													//Prompts the user for input.
		switch (input)													//A switch statement is created for each of the choices that are available.
		{
		case 1:															//Case 1: In which the user has chosen to Display the content the text file currently holds.
			system("cls");												//Clears the text on the command console's screen.
			file.open("MyLog.txt", 
				ios_base::out											//Sets the text file to be open for input statements and not overwrite the text file's content.
				| ios_base::_Nocreate);
			getline(file, text);										//Gives the text string the same content as the text file.
			cout << text << endl;										//"Displays", or prints out, the information that the text string holds.
			system("pause");											//Pauses the program so the user can take their time to read the printed text.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			file.close();												//Closes the program.
			break;														//Exits the switch statement and causes the for loop to loop and restart at the beginning.
		case 2:															//Case 2: In which the user has chosen to Write text that will be added to the contetnt of the text file.
			system("cls");												//Clears the text on the command console's screen.
			file.open("MyLog.txt",
				ios_base::in											//Sets the text file to be open for output statements, not overwrite the text file's current
				| ios_base::_Nocreate									//content, and add the new text to the end of the previous content.
				| ios_base::app);
			
			cin.getline(fileinput, 25);									//Prompts the user to write text that will be inputted into the text file.
			file << " " << fileinput;									//Adds the content of fileinput to the content of the text file.
			system("pause");											//Pauses the program so the user can take their time to read the printed text.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			file.close();												//Closes the program.
			break;														//Exits the switch statement and causes the for loop to loop and restart at the beginning.
		case 3:															//Case 3: In which the user has chosen to Clear the content of the text file.
			system("cls");												//Clears the text on the command console's screen.
			file.open("MyLog.txt",
				ios_base::out
				| ios_base::trunc);										//Clears the content in the text file.
			system("pause");											//Pauses the program so the user can take their time to read the printed text.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			file.close();												//Closes the program.
			break;														//Exits the switch statement and causes the for loop to loop and restart at the beginning.
		case 0:															//Case 0: In which the user has chosen to Exit the program.
			i = 4;														//Sets i to equal 4 so that the for loop ends and causes the program to end.
			file.close();												//Closes the program.
			break;														//Exits the switch statement.
		default:														//Default, the user entered an invalid response.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			break;														//Exits the switch statement and causes the for loop to loop and restart at the beginning.
		}
	}
		
	system("pause");
	return 0;
}