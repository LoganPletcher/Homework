////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File: File I/O: Text Files Exercise 1																  //
// Author: Logan Pletcher																				  //
// Date Created: 9/21/2015																				  //
// Brief: Creates a program that will allow a user to view and alter a text file from the command console.//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>														//Allows the programmer to use string variables in their code.
//#include <fstream>
#include "Save.h"														//Adds the code of the Save header file to this source and allows the code to be interacted with.
using namespace std;													//Allows the programmer to make the code simpler by not coding "std::" in front of various operations.

int main()
{
	SaveGame SaveFileData = { 0, false, 0, 0 };
	char favLetter;
	string input;														//A char variable for processing a users input.
	string text;														//A string variable for when the user wishes to have the contents of the text file printed to the command console.
	ifstream file1;														//An ifstream for reading text files.
	ofstream file2;														//An ofstream for writing in text files.
	string fileinput;													//A string for when the user wishes to add something to the text file.
	file1.open("MyLog.txt");											//Opens the text file MyLog.
	file1.close();														//Closes the text file MyLog.
	for (int i = 0; i < 2; i++)											//A for loop is created so that the choices and following orange text are repeated until the user exits the program.
	{
		system("cls");													//Clears the text on the command console's screen.
		cout << "Welcome user to MyLog text file manipulator.\n"		//Prints to the command console's screen the text in orange.
			<< "Please choose what to do from the following list.\n"	//The numbered words are to tell the user what choices he has to choose from.
			<< "1 Display\n2 Write\n3 Clear\n4 Save\n0 Exit\n";
		getline(cin, input);											//Prompts the user for input.
		if (input == "1")
		{
			system("cls");												//Clears the text on the command console's screen.
			file1.open("MyLog.txt",
				ios_base::in);											//Sets the text file to be open for input statements and not overwrite the text file's content.
			while (!file1.eof())										//A while loop is created to output every line of the text file until there is nothing else in the file.
			{
				getline(file1, text);									//Gives the text string the same content as the text file.
				cout << text << endl;									//"Displays", or prints out, the information that the text string holds.
			}
			system("pause");											//Pauses the program so the user can take their time to read the printed text.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			file1.close();												//Closes the text file.
		}
		else if (input == "2")
		{
			system("cls");												//Clears the text on the command console's screen.
			file2.open("MyLog.txt",										//Opens the text file for adding new text to the end of the previous content.
				ios_base::app);											
			getline(cin, fileinput);									//Prompts the user to write text that will be inputted into the text file.
			file2 << fileinput << "\n";									//Adds the content of fileinput to the content of the text file.
			system("pause");											//Pauses the program so the user can take their time to read the printed text.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			file2.close();												//Closes the text file.
		}
		else if (input == "3")
		{
			system("cls");												//Clears the text on the command console's screen.
			file1.open("MyLog.txt",
				ios_base::out
				| ios_base::trunc);										//Clears the content in the text file.
			system("pause");											//Pauses the program so the user can take their time to read the printed text.
			i = 0;														//Resets i so the for loop continues allowing for further actions.
			file1.close();												//Closes the text file.
		}
		else if (input == "4")
		{
				system("cls");											//Clears the text on the command console's screen.
				cout << "Do you want to input data and save it or "		//Prints the orange text to the command console and tells the user to choose either 1 or 2.
					<< "look at the saved data?\n"
					<< "1 Save\n2 Display Save\n";
				cin >> input;											//Prompts the user for input.
				if (input == "1")
				{
					system("cls");										//Clears the text on the command console's screen.
					cout << "What's your Favorite Number?	";			//Prints the orange text to the command console and tells the user to enter their favorite number.
					cin >> SaveFileData.favnum;							//Prompts the user to input their favorite number.
					cout << "How would you rate your Favorite Number "	
						<< "on a scale of 0 to 1000000?\n";				
					cin >> SaveFileData.rating;							
					cout << "What is your Favorite Letter?	";
					cin >> favLetter;
					SaveFileData.Saved = true;
					*SaveFileData.Pointer = &favLetter;
					SaveFileData = { SaveFileData.favnum,				
						SaveFileData.Saved,
						SaveFileData.rating,
						*SaveFileData.Pointer };
					SaveFileData.Save();
					
				}
				else if (input == "2")
				{
					system("cls");
					file1.open("Save.txt", ios_base::in);
					while (!file1.eof())								//A while loop is created to output every line of the text file until there is nothing else in the file.
					{
						getline(file1, text);							//Gives the text string the same content as the text file.
						cout << text << endl;							//"Displays", or prints out, the information that the text string holds.
					}
					file1.close();
				}
				system("pause");
				i = 0;
		}
		else if (input == "0")
		{
			break;														//Sets i to equal 4 so that the for loop ends and causes the program to end.
			file1.close();												//Closes the text file.
			file2.close();												//Closes the text file.
		}
		else
		{
			i = 0;														//Resets i so the for loop continues allowing for further actions.
		}
		
	}
	system("pause");
	return 0;
}