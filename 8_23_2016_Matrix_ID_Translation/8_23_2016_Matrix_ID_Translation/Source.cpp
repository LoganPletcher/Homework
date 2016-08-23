#include <iostream>

void Vec_T_Matrix4_Conversion(int *vec, int *mat)
{
	int *matDupl = mat;
	mat[3] = (vec[0] * matDupl[0])+(vec[1] * matDupl[1])+(vec[2] * matDupl[2])+(vec[3] * matDupl[3]);
	mat[7] = (vec[0] * matDupl[4]) + (vec[1] * matDupl[5]) + (vec[2] * matDupl[6]) + (vec[3] * matDupl[7]);
	mat[11] = (vec[0] * matDupl[8]) + (vec[1] * matDupl[9]) + (vec[2] * matDupl[10]) + (vec[3] * matDupl[11]);
	mat[15] = (vec[0] * matDupl[12]) + (vec[1] * matDupl[13]) + (vec[2] * matDupl[14]) + (vec[3] * matDupl[15]);
}

int main()
{
	int vec4[4] = { 5,3,2,1 };
	int IDmat4[16] = {1,0,0,0,
					  0,1,0,0,
					  0,0,1,0,
					  0,0,0,1};
	Vec_T_Matrix4_Conversion(vec4, IDmat4);
	for (int i = 0; i < 16; i+=4)
	{
		for (int j = i; j < i+4; j++)
			std::cout << IDmat4[j] << ",";
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}