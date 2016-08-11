#include <GLFW\glfw3.h>
#include <iostream>

int main()
{
	glfwInit();
	float currentTime = glfwGetTime();
	float previousTime = currentTime;
	float deltaTime = 0;
	int Hours = 2;
	int Minutes = 1;
	int Seconds = 0;
	while (!((Hours <= 0)&&(Minutes <= 0)&&(Seconds <= 0)))
	{
		currentTime = glfwGetTime();
		if ((currentTime - previousTime) >= 1)
		{
			deltaTime = (currentTime - previousTime);
			if (Minutes <= 0 && Seconds <= 0)
			{
				Hours--;
				Minutes = 59;
				Seconds = 60;
			}
			else if (Seconds == 0)
			{
				Minutes--;
				Seconds = 60;
			}
			Seconds -= deltaTime;
			system("cls");
			if (Hours <= 9)
				std::cout << "0" << Hours << ":";
			else
				std::cout << Hours << ":";
			if (Minutes <= 9)
				std::cout << "0" << Minutes << ":";
			else
				std::cout << Minutes << ":";
			if (Seconds <= 9)
				std::cout << "0" << Seconds;
			else
				std::cout << Seconds;
			previousTime = currentTime;
		}
	}
	return 0;
}