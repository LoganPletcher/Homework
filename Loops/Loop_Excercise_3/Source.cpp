#include <iostream>
int main()
{
	int j = 0;
	for (int i = 0; i <= 1000; i++) {
		if (i == 1000) {
			std::cout << j << std::endl;
		}
		if (i % 3 == 0 && i % 5 == 0) {
			j += i;
			continue;
		}
		else if (i % 3 == 0) {
			j += i;
			continue;
		}
		else if (i % 5 == 0) {
			j += i;
			continue;
		}
	}
	system("pause");
	return 0;
}