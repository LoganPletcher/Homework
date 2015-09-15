#include <iostream>
using namespace std;

void RevString(char* array)											//This function takes in a string and reverses it using pointers
{
	for (int i = 0; i < (strlen(array) / 2); i++)					//A for loop is created to reverse the array characters using pointers to 
																	//assign characters to memory addresses in the reverse order of the original characters
	{
		char holder = *(array + i);									//creates a holding place for the character that we be replaced in the current loop 
																	//sequence so that it can be reused in the loop sequence 
		*(array + i) = *(array + (strlen(array) - (i + 1)));		//replaces the current character of the array that equals i
		cout << array << endl;										//outputs what the array 'array' looks like at this moment
		*(array + (strlen(array) - (i + 1))) = holder;				//replaces the character that was used to replace the character of the array that equals
																	//i with the held character that was assinged to 'holder'
		cout << array << endl;										//outputs what the array 'array' looks like at this moment
	}
	
	
}

int main()
{
	char strng[100];												//Makes the string strng and assigns the string 'HELLO' to it
	cin.getline(strng, 100);										//gets user input for strng

	RevString(strng);												//sends the string value over to the function RevString
	system("pause");
	return 0;
}