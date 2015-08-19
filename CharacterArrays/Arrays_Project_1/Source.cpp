#include <iostream>
#include <string>
int main()
{ //Still needs to be able to output the name with a space
	char name[16];
	char surname[16];
	std::cout << "Type your First and Last name. First name first, then your Last name." << std::endl;
	std::cin >> name;
	std::cin >> surname;
	strcat_s(name, surname);
	std::cout << name << std::endl;
	system("pause");
	return 0;
}