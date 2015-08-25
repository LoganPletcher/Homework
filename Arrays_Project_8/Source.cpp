#include <iostream>
#include <string>
using namespace std;
int main()
{
	char word[32];
	char piglatinword[32];
	cout << "Input a word. ";
	cin.getline(word, 32);
	strcpy_s(word, piglatinword);
	if ((char)word[0] == 65 || (char)word[0] == 69 || (char)word[0] == 73 || (char)word[0] == 79 || (char)word[0] == 85 || (char)word[0] == 97 || (char)word[0] == 101 || (char)word[0] == 105 || (char)word[0] == 111 || (char)word[0] == 117)
	{

	}
	system("pause");
	return 0;
}