#include <iostream>
typedef float mat4[4][4] ;

bool Orthographic_Matrix(int r, int l, int t, int b, int n, int f, mat4 &mat)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0 && j == 0)
				mat[i][j] = 2.0 / (r - l); //Sets the first number of the first row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 0 && j == 3)
				mat[0][3] = -((r + l) / (r - l)); //Sets the fourth number of the first row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 1 && j == 1)
				mat[i][j] = 2.0 / (t - b); //Sets the second number of the second row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 1 && j == 3)
				mat[i][j] = -((t + b) / (t - b)); //Sets the fourth number of the second row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 2 && j == 2)
				mat[i][j] = 2.0 / (f - n); //Sets the third number of the third row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 2 && j == 3)
				mat[i][j] = -((f + n) / (f - n)); //Sets the fourth number of the third row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 3 && j == 3)
				mat[i][j] = 1; //Sets the fourth number of the fourth row in the matrix to one.
			else
				mat[i][j] = 0; //Sets the rest of the matrix numbers to 0.
		}
	}

	return true;
}

bool Perspective_Matrix(float r, float l, float t, float b, float n, float f, float fovd, mat4 &mat)
{
	float a = 1.0*((r - l) / (t - b));
	float fovr = (fovd * 3.14159265359) / 180;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0 && j == 0)
				mat[i][j] = 1.0 / (a*(tan(fovr / 2.0))); //Sets the first number of the first row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 1 && j == 1)
				mat[i][j] = 1.0 / (tan(fovr / 2.0)); //Sets the second number of the second row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 2 && j == 2)
				mat[i][j] = -((f + n) / (f - n)); //Sets the third number of the third row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 2 && j == 3)
				mat[i][j] = -2.0*f*n / (f - n); //Sets the fourth number of the third row in the matrix to a calculated number that I don't know how to properly describe (Help?).
			else if (i == 3 && j == 2)
				mat[i][j] = -1; //Sets the fourth number of the fourth row in the matrix to negative one.
			else
				mat[i][j] = 0; //Sets the rest of the matrix numbers to 0.0.39269908169
		}
	}

	return true;
}
int main()
{
	mat4 OrthoMat;
	mat4 *matptr = &OrthoMat;
	Orthographic_Matrix(800, 2, 800, 2, 800, 2, *matptr);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			std::cout << OrthoMat[i][j] << ", ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	Perspective_Matrix(16, 0, 9, 0, 100, 0, 45, *matptr);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			std::cout << OrthoMat[i][j] << ", ";
		std::cout << std::endl;
	}
	//pointers be like
	//int p; dis a variable
	//int * ptr; this is apointer to p's address
	//*ptr = 5;
	//*(ptr) = 
	//print(ptr) this will just print the address
	//equivalent to just doing print(&p)
	//start ptr things
	//int * p; //declare a pointer
	//p = &num; //assign the ptr the address of num; aka: point to num
	//int * p2 = &num;//declare an integer pointer and point to the address of num;
	//*p2 = 15; //change the value at the address
	//int newnum = *p + 5; //this will be 20;
	//int sizeofintptr = sizeof(int*);
	//int sizeofcharptr = sizeof(char*);
	system("pause");
	return 0;
}