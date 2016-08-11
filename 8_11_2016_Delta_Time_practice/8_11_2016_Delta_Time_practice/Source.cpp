#include <GLFW\glfw3.h>
#include <iostream>

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	//if (key == GLFW_KEY_SPACE && action == GLFW_PRESS)
	//	system("pause");
}

//int main()
//{
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
//	float currentTime = glfwGetTime();
//	GLFWwindow* window = glfwCreateWindow(100, 100, "jeff", nullptr, nullptr);
//	if (window == nullptr) {
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return -1;
//	}
//	glfwMakeContextCurrent(window);
//	float previousTime = currentTime;
//	float deltaTime = 0;
//	int Hours = 0;
//	int Minutes = 1;
//	int Seconds = 0;
//	int state = glfwGetKey(window, GLFW_KEY_SPACE);
//	glfwSetKeyCallback(window, key_callback);
//	while (!((Hours <= 0)&&(Minutes <= 0)&&(Seconds <= 0))|| !glfwWindowShouldClose(window))
//	{
//		glfwPollEvents();
//		glfwSwapBuffers(window);
//		currentTime = glfwGetTime();
//		if ((currentTime - previousTime) >= 1)
//		{
//			deltaTime = (currentTime - previousTime);
//			if (Minutes <= 0 && Seconds <= 0)
//			{
//				Hours--;
//				Minutes = 59;
//				Seconds = 60;
//			}
//			else if (Seconds == 0)
//			{
//				Minutes--;
//				Seconds = 60;
//			}
//			Seconds -= deltaTime;
//			system("cls");
//			if (Hours <= 9)
//				std::cout << "0" << Hours << ":";
//			else
//				std::cout << Hours << ":";
//			if (Minutes <= 9)
//				std::cout << "0" << Minutes << ":";
//			else
//				std::cout << Minutes << ":";
//			if (Seconds <= 9)
//				std::cout << "0" << Seconds << std::endl;
//			else
//				std::cout << Seconds << std::endl;
//			previousTime = currentTime;
//		}
//	}
//	return 0;
//}

struct State
{
	int num;
	std::string name;
};

class FiniteStateMachine
{
public:
	FiniteStateMachine(State);
	State m_cs;
	State States[];
	bool ChangeStates(std::string);
	class Transition
	{
	public:
		State m_firstState;
		State m_secondState;
		Transition(State S1, State S2) {
			m_firstState = S1;
			m_secondState = S2;
		}
	};
private:
	
};

FiniteStateMachine::FiniteStateMachine(State state)
{
	m_cs = state;
}

bool FiniteStateMachine::ChangeStates(std::string t)
{
	bool startingState = false;
	bool validTransition = false;
	return false;
}

int main()
{
	State Start = { 0,"Start" }, Running = { 1,"Running" }, Hours = { 2,"Hours" }, Minutes = { 3,"Minutes" };
	State States[4] = { Start,Running,Hours,Minutes };
	FiniteStateMachine fsm = FiniteStateMachine(States[0]);
	system("pause");
	return 0;
}