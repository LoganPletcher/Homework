#ifndef HIGHSCORETXTFILE_H
#define HIGHSCORETXTFILE_H
#include <iostream>
#include <fstream>
using namespace std;

class HSTXTFILE
{
public:
	HSTXTFILE();
	void save(Player);
	void cleardata();
	void display();
	ifstream file1;
	ofstream file2;
	string file;
	int HS;

private:

};

HSTXTFILE::HSTXTFILE()
{
}

void HSTXTFILE::save(Player p)
{
	file1.open("HIGHSCORE.txt", ios_base::in);
	getline(file1, file);
	string::size_type sz;
	HS = stoi(file, &sz);
	if (p.gold > HS)
	{
		file1.close();
		file2.open("HIGHSCORE.txt", ios_base::out);
		file2 << p.gold;
		file2.close();
	}
	else
	{
		file1.close();
	}
}

void HSTXTFILE::cleardata()
{
	file2.open("HIGHSCORE.txt", ios_base::out);
	file2 << 0;
	file2.close();
	system("cls");
	cout << "DATA CLEARED\n";
}

void HSTXTFILE::display()
{
	system("cls");
	file1.open("HIGHSCORE.txt", ios_base::in);
	getline(file1, file);
	cout << "High Score: " << file << endl;
	file1.close();
}

#endif HIGHSCORETXTFILE_H