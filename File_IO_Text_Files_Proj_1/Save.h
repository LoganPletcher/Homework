#ifndef SAVE_H
#define SAVE_H
#include <fstream>													//Allows the programmer to perform text file operations in the program.

using namespace std;
class SaveGame
{
public:
	SaveGame(int, bool, float, char*);
	void Save();
	int favnum;
	bool Saved;
	float rating;
	char* Pointer[200];

private:

};

SaveGame::SaveGame(int fn, bool sa, float ra, char* n)
{
	favnum = fn;
	Saved = sa;
	rating = ra;
	*Pointer = n;
}

void SaveGame::Save()
{
	ifstream file1;														//An ifstream for reading text files.
	ofstream file2;														//An ofstream for writing in text files.
	file2.open("Save.txt", ios_base::out);
	file2 << "Favorite Number: "
		<< favnum << endl
		<< "Has the file been saved?\n"
		<< "1 = Yes\n0 = No\n"
		<< Saved << endl
		<< "User's Rating: "
		<< rating << endl
		<< "Favorite Letter: "
		<< *Pointer[0];
	file2.close();
}
#endif Save_H