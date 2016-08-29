#include <iostream>

void Vec_T_Matrix4_Conversion(int *vec, int *mat)
{
	int *matDupl = mat;
	mat[3] = (vec[0] * matDupl[0])+(vec[1] * matDupl[1])+(vec[2] * matDupl[2])+(vec[3] * matDupl[3]);
	mat[7] = (vec[0] * matDupl[4]) + (vec[1] * matDupl[5]) + (vec[2] * matDupl[6]) + (vec[3] * matDupl[7]);
	mat[11] = (vec[0] * matDupl[8]) + (vec[1] * matDupl[9]) + (vec[2] * matDupl[10]) + (vec[3] * matDupl[11]);
	mat[15] = (vec[0] * matDupl[12]) + (vec[1] * matDupl[13]) + (vec[2] * matDupl[14]) + (vec[3] * matDupl[15]);
}

void Vec_T_Matrix3_Conversion(int *vec, int *mat)
{
	int *matDupl = mat;
	mat[2] = (vec[0] * matDupl[0]) + (vec[1] * matDupl[1]) + (vec[2] * matDupl[2]);
	mat[5] = (vec[0] * matDupl[3]) + (vec[1] * matDupl[4]) + (vec[2] * matDupl[5]);
	mat[8] = (vec[0] * matDupl[6]) + (vec[1] * matDupl[7]) + (vec[2] * matDupl[8]);
}

void Vec_T_Matrix2_Conversion(int *vec, int *mat)
{
	int *matDupl = mat;
	mat[1] = (vec[0] * matDupl[0]) + (vec[1] * matDupl[1]);
	mat[3] = (vec[0] * matDupl[2]) + (vec[1] * matDupl[3]);
}

int main()
{
	int vec4[4] = { 5,3,2,1 };
	int IDmat4[16] = {1,0,0,0,
					  0,1,0,0,
					  0,0,1,0,
					  0,0,0,1};
	Vec_T_Matrix4_Conversion(vec4, IDmat4);
	int vec3[3] = { 5,3,1 };
	int IDmat3[9] = { 1,0,0,
					  0,1,0,
					  0,0,1 };
	Vec_T_Matrix3_Conversion(vec3, IDmat3);
	int vec2[2] = { 5,1 };
	int IDmat2[4] = { 1,0,
					  0,1 };
	Vec_T_Matrix2_Conversion(vec2, IDmat2);
	for (int i = 0; i < 4; i += 2)
	{
		for (int j = i; j < i + 2; j++)
			std::cout << IDmat2[j] << ",";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 9; i += 3)
	{
		for (int j = i; j < i + 3; j++)
			std::cout << IDmat3[j] << ",";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 16; i+=4)
	{
		for (int j = i; j < i+4; j++)
			std::cout << IDmat4[j] << ",";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}