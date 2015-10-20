#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	VECT2D vec1;
	VECT2D vec2;
	Vector<VECT2D> insert;

	cout << "Type in the x and y values of the first vector:\nx: ";
	cin >> vec1.x;
	cout << "y: ";
	cin >> vec1.y;

	cout << "\nNow type in the x and y values of the second vector:\nx: ";
	cin >> vec2.x;
	cout << "y: ";
	cin >> vec2.y;

	insert.addition2D(vec1, vec2);
	cout << "\nAfter performing Vector addition using the two vectors this is the resulting vector: (" << insert.sum2D.x << ", " << insert.sum2D.y << ")\n\n";
	
	insert.subtraction2D(vec1, vec2);
	cout << "After performing Vector subtraction using the two vectors this is the resulting vector: (" << insert.sum2D.x << ", " << insert.sum2D.y << ")\n\n";

	VECT3D vecUno;
	VECT3D vecDos;
	Vector<VECT3D> newinsert;

	cout << "Type in the coordinate values for the first 3D vector:\nx: ";
	cin >> vecUno.x;
	cout << "y: ";
	cin >> vecUno.y;
	cout << "z: ";
	cin >> vecUno.z;

	cout << "Type in the coordinate values for the second 3D vector:\nx: ";
	cin >> vecDos.x;
	cout << "y: ";
	cin >> vecDos.y;
	cout << "z: ";
	cin >> vecDos.z;

	newinsert.addition3D(vecUno, vecDos);
	cout << "\nAfter performing Vector addition using the two vectors this is the resulting vector: "
		<< "(" << newinsert.sum3D.x << ", " << newinsert.sum3D.y << ", " << newinsert.sum3D.z << ")\n\n";

	newinsert.subtraction3D(vecUno, vecDos);
	cout << "After performing Vector subtraction using the two vectors this is the resulting vector: "
		<< "(" << newinsert.sum3D.x << ", " << newinsert.sum3D.y << ", " << newinsert.sum3D.z << ")\n\n";

	Vector<double> maginsert;

	maginsert.Magnitude2D(vec1.x, vec1.y);
	cout << "The magnitude of the first 2D vector is " << maginsert.sum2D << ".\n";

	system("pause");
	return 0;
}