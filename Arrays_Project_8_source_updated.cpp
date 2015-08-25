#include <iostream>
using namespace std;
int main()
{
	char word[32];
	char piglatinword[32];
	cout << "Input a word. ";
	cin.getline(word, 32);
	if ((char)word[0] == 65 || 69 || 73 || 79 || 85 || 97 || 101 || 105 || 111 || 117)
	{
		cout << "Butts." << endl;
	}
	system("pause");
	return 0;
}